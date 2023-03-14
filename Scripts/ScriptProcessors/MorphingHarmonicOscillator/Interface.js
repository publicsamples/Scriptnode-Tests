Content.makeFrontInterface(600, 300);

const var MorphingHarmonicOscillator = Synth.getChildSynth("Morphing Harmonic Oscillator");

const var SliderPack1 = Content.getComponent("SliderPack1");
const var SliderPack2 = Content.getComponent("SliderPack2");
const var SliderPack3 = Content.getComponent("SliderPack3");
const var SliderPack4 = Content.getComponent("SliderPack4");

const var Crossfade = Content.getComponent("Crossfade");


inline function onCrossfadeControl(component, value)
{
	MorphingHarmonicOscillator.setAttribute(MorphingHarmonicOscillator.XFADE, value);

	if(value == 0)
	{
		SliderPack1.fadeComponent(1, 1500);
  		SliderPack2.fadeComponent(0, 1500);
		SliderPack3.fadeComponent(0, 1500);
		SliderPack4.fadeComponent(0, 1500);
	}
	else if(value == 0.25)
	{
		SliderPack1.fadeComponent(0, 1500);
  		SliderPack2.fadeComponent(1, 1500);
		SliderPack3.fadeComponent(0, 1500);
		SliderPack4.fadeComponent(0, 1500);
		}
	
	else if(value == 0.75)
	{
	SliderPack1.fadeComponent(0, 1500);
  		SliderPack2.fadeComponent(0, 1500);
		SliderPack3.fadeComponent(1, 1500);
		SliderPack4.fadeComponent(0, 1500);
		}
			
		else if(value == 1)
	{
		SliderPack1.fadeComponent(0, 1500);
  		SliderPack2.fadeComponent(0, 1500);
		SliderPack3.fadeComponent(0, 1500);
		SliderPack4.fadeComponent(1, 1500);
		}
};

Content.getComponent("Crossfade").setControlCallback(onCrossfadeControl);


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
 