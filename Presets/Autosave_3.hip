Processor 
Type SynthChain ID Master Chain Bypassed Gain 	      �?Balance 	        VoiceLimit 	      P@KillFadeTime 	      4@IconColour 0 packageName  BuildVersion �  EditorStates BodyShown 0 Visible 1 Solo 0 Folded 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors  Processor Type ScriptProcessor ID Interface Bypassed Script �Content.makeFrontInterface(600, 600);

const var fade = Content.getComponent("fade");
const var fademod = Content.getComponent("fademod");
const var attack = Content.getComponent("attack");
const var release = Content.getComponent("release");


const var ScriptTimeVariantModulator1 = Synth.getModulator("Script Time Variant Modulator1");
const var ScriptTimeVariantModulator2 = Synth.getModulator("Script Time Variant Modulator2");
const var ScriptTimeVariantModulator3 = Synth.getModulator("Script Time Variant Modulator3");


inline function onfadeControl(component, value)
{
ScriptTimeVariantModulator1.setAttribute(ScriptTimeVariantModulator1.fade, value);
ScriptTimeVariantModulator2.setAttribute(ScriptTimeVariantModulator2.fade, value);
ScriptTimeVariantModulator3.setAttribute(ScriptTimeVariantModulator3.fade, value);

};

Content.getComponent("fade").setControlCallback(onfadeControl);

inline function onfademodControl(component, value)
{
ScriptTimeVariantModulator1.setAttribute(ScriptTimeVariantModulator1.fademod, value);
ScriptTimeVariantModulator2.setAttribute(ScriptTimeVariantModulator2.fademod, value);
ScriptTimeVariantModulator3.setAttribute(ScriptTimeVariantModulator3.fademod, value);

};

Content.getComponent("fademod").setControlCallback(onfademodControl);

inline function onattackControl(component, value)
{
ScriptTimeVariantModulator1.setAttribute(ScriptTimeVariantModulator1.attack, value);
ScriptTimeVariantModulator2.setAttribute(ScriptTimeVariantModulator2.attack, value);
ScriptTimeVariantModulator3.setAttribute(ScriptTimeVariantModulator3.attack, value);

};

Content.getComponent("attack").setControlCallback(onattackControl);


inline function onreleaseControl(component, value)
{
ScriptTimeVariantModulator1.setAttribute(ScriptTimeVariantModulator1.release, value);
ScriptTimeVariantModulator2.setAttribute(ScriptTimeVariantModulator2.release, value);
ScriptTimeVariantModulator3.setAttribute(ScriptTimeVariantModulator3.release, value);

};

Content.getComponent("release").setControlCallback(onreleaseControl);
function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0 contentShown 1 onInitOpen 1 Folded 1  ChildProcessors   Content  Control type ScriptSlider id fade value 	         Control type ScriptSlider id 	fademod value 	      �? Control type ScriptSlider id attack value 	   �=
�? Control type ScriptSlider id 	release value 	         UIData  ContentProperties DeviceType 	Desktop Component type ScriptSlider id fade x �   y �    Component type ScriptSlider id 	fademod x 	     �s@y 	     @e@min 	      � Component type ScriptSlider id attack x 	      ^@y 	     �q@min 	      � Component type ScriptSlider id 	release x 	     �p@y 	     �q@middlePosition 	      �? Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type SynthGroup ID Syntesizer Group1 Bypassed Gain 	      �?Balance 	        VoiceLimit 	      p@KillFadeTime 	      4@IconColour 0 EnableFM 	        CarrierIndex 	      �ModulatorIndex 	      �UnisonoVoiceAmount 	      �?UnisonoDetune 	        UnisonoSpread 	      �?KillSecondVoices 	      �?EditorStates BodyShown 1 Visible 1 Solo 0 GainModulationShown 1  ChildProcessors  	Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor 	Type SimpleEnvelope ID DefaultEnvelope Bypassed Monophonic 	        Retrigger 	      �?Intensity 	      �?Attack 	      @Release 	      $@LinearMode 	      �?EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors  Processor Type ModulatorChain ID Attack Time Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Detune Mod Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Spread Mod Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type StreamingSampler ID 
Sampler1 Bypassed Gain 	      �?Balance 	        VoiceLimit 	      p@KillFadeTime 	      4@IconColour 0 PreloadSize 	      �@BufferSize 	      �@VoiceAmount 	      p@SamplerRepeatMode 	      @RRGroupAmount 	      �?PitchTracking 	      �?OneShot 	        CrossfadeGroups 	        Purged 	        Reversed 	        NumChannels    UseStaticMatrix 	        Group0Table  Group1Table  Group2Table  Group3Table  Group4Table  Group5Table  Group6Table  Group7Table  SampleMapID CS-Saw EditorStates BodyShown 1 Visible 1 Solo 0 MapPanelShown 1 BigSampleMap 1 CrossfadeTableShown 0  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type ScriptTimeVariantModulator ID  Script Time Variant Modulator1 Bypassed Intensity 	      �?Script � function prepareToPlay(sampleRate, samplesPerBlock)
{
	
}
 function processBlock(buffer)
{
	
}
 function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   Content   Networks  Network ID xf Version 0.0.0  UIData  ContentProperties DeviceType 	Desktop  Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type ModulatorChain ID Sample Start Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type ModulatorChain ID Group Fade Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� channels  channelData enabled level 	        suffix   Processor Type StreamingSampler ID 
Sampler2 Bypassed Gain 	      �?Balance 	        VoiceLimit 	      p@KillFadeTime 	      4@IconColour 0 PreloadSize 	      �@BufferSize 	      �@VoiceAmount 	      p@SamplerRepeatMode 	      @RRGroupAmount 	      �?PitchTracking 	      �?OneShot 	        CrossfadeGroups 	        Purged 	        Reversed 	        NumChannels    UseStaticMatrix 	        Group0Table  Group1Table  Group2Table  Group3Table  Group4Table  Group5Table  Group6Table  Group7Table  SampleMapID 	CS-Sine EditorStates BodyShown 1 Visible 1 Solo 0 MapPanelShown 1 BigSampleMap 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type ScriptTimeVariantModulator ID  Script Time Variant Modulator2 Bypassed Intensity 	      �?Script � function prepareToPlay(sampleRate, samplesPerBlock)
{
	
}
 function processBlock(buffer)
{
	
}
 function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   Content   Networks  Network ID xf2 Version 0.0.0  UIData  ContentProperties DeviceType 	Desktop  Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Sample Start Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Group Fade Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� channels  channelData enabled level 	        suffix   Processor Type StreamingSampler ID 
Sampler3 Bypassed Gain 	      �?Balance 	        VoiceLimit 	      p@KillFadeTime 	      4@IconColour 0 PreloadSize 	      �@BufferSize 	      �@VoiceAmount 	      p@SamplerRepeatMode 	      @RRGroupAmount 	      �?PitchTracking 	      �?OneShot 	        CrossfadeGroups 	        Purged 	        Reversed 	        NumChannels    UseStaticMatrix 	        Group0Table  Group1Table  Group2Table  Group3Table  Group4Table  Group5Table  Group6Table  Group7Table  SampleMapID Piano EditorStates BodyShown 1 Visible 1 Solo 0 MapPanelShown 1 BigSampleMap 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type ScriptTimeVariantModulator ID  Script Time Variant Modulator3 Bypassed Intensity 	      �?Script � function prepareToPlay(sampleRate, samplesPerBlock)
{
	
}
 function processBlock(buffer)
{
	
}
 function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   Content   Networks  Network ID xf3 Version 0.0.0  UIData  ContentProperties DeviceType 	Desktop  Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Sample Start Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Group Fade Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� channels  channelData enabled level 	        suffix   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� macro_controls  macro name 	Macro 1 value 	        midi_cc ���� macro name 	Macro 2 value 	        midi_cc ���� macro name 	Macro 3 value 	        midi_cc ���� macro name 	Macro 4 value 	        midi_cc ���� macro name 	Macro 5 value 	        midi_cc ���� macro name 	Macro 6 value 	        midi_cc ���� macro name 	Macro 7 value 	        midi_cc ���� macro name 	Macro 8 value 	        midi_cc ���� MidiAutomation   MPEData Enabled  