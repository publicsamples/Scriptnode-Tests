#pragma once

// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace minmaxtest_impl
{
// ==============================| Node & Parameter type declarations |==============================

template <int NV>
using file_player_t = wrap::data<core::file_player<NV>, 
                                 data::external::audiofile<0>>;
template <int NV>
using minmax_t = control::minmax<NV, 
                                 parameter::plain<file_player_t<NV>, 3>>;
template <int NV>
using clone_cable_t = control::clone_cable<parameter::cloned<parameter::plain<minmax_t<NV>, 0>>, 
                                           duplilogic::spread>;

template <int NV>
using clone_child_t = container::chain<parameter::empty, 
                                       wrap::fix<2, minmax_t<NV>>, 
                                       file_player_t<NV>>;
template <int NV>
using clone_t = wrap::fix_clonecopy<clone_child_t<NV>, 16>;

template <int NV>
using minmaxtest_t_ = container::chain<parameter::empty, 
                                       wrap::fix<2, clone_cable_t<NV>>, 
                                       clone_t<NV>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public minmaxtest_impl::minmaxtest_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 1;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(minmaxtest);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(2)
		{
			0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& clone_cable = this->getT(0);        // minmaxtest_impl::clone_cable_t<NV>
		auto& clone = this->getT(1);              // minmaxtest_impl::clone_t<NV>              // minmaxtest_impl::clone_child_t<NV>
		auto minmax = this->getT(1).getT(0);      // minmaxtest_impl::minmax_t<NV>
		auto file_player = this->getT(1).getT(1); // minmaxtest_impl::file_player_t<NV>
		
		// Modulation Connections ------------------------------------------------------------------
		
		minmax.getWrappedObject().getParameter().connectT(0, file_player); // minmax -> file_player::FreqRatio
		clone_cable.getWrappedObject().getParameter().connectT(0, minmax); // clone_cable -> minmax::Value
		
		// Default Values --------------------------------------------------------------------------
		
		;                                 // clone_cable::NumClones is deactivated
		clone_cable.setParameterT(1, 0.); // control::clone_cable::Value
		clone_cable.setParameterT(2, 0.); // control::clone_cable::Gamma
		
		clone.setParameterT(0, 16.); // container::clone::NumClones
		clone.setParameterT(1, 2.);  // container::clone::SplitSignal
		
		;                            // minmax::Value is automated
		minmax.setParameterT(1, 0.); // control::minmax::Minimum
		minmax.setParameterT(2, 1.); // control::minmax::Maximum
		minmax.setParameterT(3, 1.); // control::minmax::Skew
		minmax.setParameterT(4, 0.); // control::minmax::Step
		minmax.setParameterT(5, 0.); // control::minmax::Polarity
		
		file_player.setParameterT(0, 0.);   // core::file_player::PlaybackMode
		file_player.setParameterT(1, 1.);   // core::file_player::Gate
		file_player.setParameterT(2, 440.); // core::file_player::RootFrequency
		;                                   // file_player::FreqRatio is automated
		
		this->setExternalData({}, -1);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
	static constexpr bool hasTail() { return true; };
	
	void setExternalData(const ExternalData& b, int index)
	{
		// External Data Connections ---------------------------------------------------------------
		
		this->getT(1).getT(1).setExternalData(b, index); // minmaxtest_impl::file_player_t<NV>
	}
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ======================================| Public Definition |======================================

namespace project
{
// polyphonic template declaration

template <int NV>
using minmaxtest = wrap::node<minmaxtest_impl::instance<NV>>;
}


