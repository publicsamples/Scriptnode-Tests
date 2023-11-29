Content.makeFrontInterface(600, 100);

const var fade = Content.getComponent("fade");
const var fademod = Content.getComponent("fademod");
const var attack = Content.getComponent("attack");
const var release = Content.getComponent("release");


const var xf1 = Synth.getEffect("xf1");
const var xf2 = Synth.getEffect("xf2");
const var xf3 = Synth.getEffect("xf3");

inline function onfadeControl(component, value)
{
xf1.setAttribute(xf1.fade, value);
xf2.setAttribute(xf2.fade, value);
xf3.setAttribute(xf3.fade, value);

};

Content.getComponent("fade").setControlCallback(onfadeControl);

inline function onfademodControl(component, value)
{
xf1.setAttribute(xf1.fademod, value);
xf2.setAttribute(xf2.fademod, value);
xf3.setAttribute(xf3.fademod, value);

};

Content.getComponent("fademod").setControlCallback(onfademodControl);

inline function onattackControl(component, value)
{
xf1.setAttribute(xf1.attack, value);
xf2.setAttribute(xf2.attack, value);
xf3.setAttribute(xf3.attack, value);

};

Content.getComponent("attack").setControlCallback(onattackControl);


inline function onreleaseControl(component, value)
{
xf1.setAttribute(xf1.release, value);
xf2.setAttribute(xf2.release, value);
xf3.setAttribute(xf3.release, value);

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
 