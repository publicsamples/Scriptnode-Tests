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

namespace Harmonicoscillator_impl
{
// ==============================| Node & Parameter type declarations |==============================

template <int NV>
using oscillator_t = wrap::no_data<core::oscillator<NV>>;
DECLARE_PARAMETER_RANGE_STEP(clone_pack_modRange, 
                             1., 
                             16., 
                             1.);

template <int NV>
using clone_pack_mod = parameter::from0To1<oscillator_t<NV>, 
                                           2, 
                                           clone_pack_modRange>;

template <int NV>
using clone_pack_t = wrap::data<control::clone_pack<parameter::cloned<clone_pack_mod<NV>>>, 
                                data::external::sliderpack<0>>;

DECLARE_PARAMETER_RANGE_STEP(clone_cable_modRange, 
                             0., 
                             4., 
                             1.);

template <int NV>
using clone_cable_mod = parameter::from0To1<oscillator_t<NV>, 
                                            0, 
                                            clone_cable_modRange>;

template <int NV>
using clone_cable_t = control::clone_cable<parameter::cloned<clone_cable_mod<NV>>, 
                                           duplilogic::fixed>;

template <int NV>
using split_t = container::split<parameter::empty, 
                                 wrap::fix<2, clone_pack_t<NV>>, 
                                 clone_cable_t<NV>>;

template <int NV>
using clone_child_t = container::chain<parameter::empty, 
                                       wrap::fix<2, oscillator_t<NV>>>;
template <int NV>
using clone_t = wrap::fix_clonecopy<clone_child_t<NV>, 4>;

template <int NV>
using chain_t = container::chain<parameter::empty, 
                                 wrap::fix<2, split_t<NV>>, 
                                 clone_t<NV>>;

namespace Harmonicoscillator_t_parameters
{
// Parameter list for Harmonicoscillator_impl::Harmonicoscillator_t --------------------------------

template <int NV>
using Offset = parameter::plain<Harmonicoscillator_impl::clone_pack_t<NV>, 
                                1>;
template <int NV>
using Shape = parameter::plain<Harmonicoscillator_impl::clone_cable_t<NV>, 
                               1>;
template <int NV>
using Harmonicoscillator_t_plist = parameter::list<Offset<NV>, Shape<NV>>;
}

template <int NV>
using Harmonicoscillator_t_ = container::chain<Harmonicoscillator_t_parameters::Harmonicoscillator_t_plist<NV>, 
                                               wrap::fix<2, chain_t<NV>>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public Harmonicoscillator_impl::Harmonicoscillator_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 1;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Harmonicoscillator);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(32)
		{
			0x005B, 0x0000, 0x4F00, 0x6666, 0x6573, 0x0074, 0x0000, 0x0000, 
            0x0000, 0x3F80, 0x4FDF, 0x3EA6, 0x0000, 0x3F80, 0x0000, 0x0000, 
            0x015B, 0x0000, 0x5300, 0x6168, 0x6570, 0x0000, 0x0000, 0x0000, 
            0x8000, 0x353F, 0x725E, 0x003D, 0x8000, 0x003F, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& chain = this->getT(0);                       // Harmonicoscillator_impl::chain_t<NV>
		auto& split = this->getT(0).getT(0);               // Harmonicoscillator_impl::split_t<NV>
		auto& clone_pack = this->getT(0).getT(0).getT(0);  // Harmonicoscillator_impl::clone_pack_t<NV>
		auto& clone_cable = this->getT(0).getT(0).getT(1); // Harmonicoscillator_impl::clone_cable_t<NV>
		auto& clone = this->getT(0).getT(1);               // Harmonicoscillator_impl::clone_t<NV>               // Harmonicoscillator_impl::clone_child_t<NV>
		auto oscillator = this->getT(0).getT(1).getT(0);   // Harmonicoscillator_impl::oscillator_t<NV>
		
		// Parameter Connections -------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, clone_pack); // Offset -> clone_pack::Value
		
		this->getParameterT(1).connectT(0, clone_cable); // Shape -> clone_cable::Value
		
		// Modulation Connections ------------------------------------------------------------------
		
		clone_pack.getWrappedObject().getParameter().connectT(0, oscillator);  // clone_pack -> oscillator::FreqRatio
		clone_cable.getWrappedObject().getParameter().connectT(0, oscillator); // clone_cable -> oscillator::Mode
		
		// Default Values --------------------------------------------------------------------------
		
		clone_pack.setParameterT(0, 4.); // control::clone_pack::NumClones
		;                                // clone_pack::Value is automated
		
		;                                 // clone_cable::NumClones is deactivated
		;                                 // clone_cable::Value is automated
		clone_cable.setParameterT(2, 0.); // control::clone_cable::Gamma
		
		clone.setParameterT(0, 4.); // container::clone::NumClones
		clone.setParameterT(1, 2.); // container::clone::SplitSignal
		
		;                                      // oscillator::Mode is automated
		oscillator.setParameterT(1, 220.);     // core::oscillator::Frequency
		;                                      // oscillator::FreqRatio is automated
		oscillator.setParameterT(3, 1.);       // core::oscillator::Gate
		oscillator.setParameterT(4, 0.);       // core::oscillator::Phase
		oscillator.setParameterT(5, 0.130797); // core::oscillator::Gain
		
		this->setParameterT(0, 0.324828);
		this->setParameterT(1, 0.0591719);
		this->setExternalData({}, -1);
	}
	~instance() override
	{
		// Cleanup external data references --------------------------------------------------------
		
		this->setExternalData({}, -1);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
	
	void setExternalData(const ExternalData& b, int index)
	{
		// External Data Connections ---------------------------------------------------------------
		
		this->getT(0).getT(0).getT(0).setExternalData(b, index); // Harmonicoscillator_impl::clone_pack_t<NV>
		this->getT(0).getT(1).getT(0).setExternalData(b, index); // Harmonicoscillator_impl::oscillator_t<NV>
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
using Harmonicoscillator = wrap::node<Harmonicoscillator_impl::instance<NV>>;
}


