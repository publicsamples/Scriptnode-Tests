Content.makeFrontInterface(150, 300);

//Xfade control

const var XFADE1 = Synth.getModulator("XFADE1");
const var XFADE2 = Synth.getModulator("XFADE2");
const var XFADE3 = Synth.getModulator("XFADE3");
const var XFADE4 = Synth.getModulator("XFADE4");

const var Smoothing = Content.getComponent("Smoothing");
const var LFODepth = Content.getComponent("LFO Depth");
const var LFOSpeed = Content.getComponent("LFO Speed");




inline function onXFADEControl(component, value)
{
   XFADE1.setAttribute(XFADE1.xfade, value);
   XFADE2.setAttribute(XFADE2.xfade, value);
   XFADE3.setAttribute(XFADE3.xfade, value);
   XFADE4.setAttribute(XFADE4.xfade, value);
};

Content.getComponent("XFADE").setControlCallback(onXFADEControl);


inline function onSmoothingControl(component, value)
{
   XFADE1.setAttribute(XFADE1.smooth, value);
   XFADE2.setAttribute(XFADE2.smooth, value);
   XFADE3.setAttribute(XFADE3.smooth, value);
   XFADE4.setAttribute(XFADE4.smooth, value);
};

Content.getComponent("Smoothing").setControlCallback(onSmoothingControl);


inline function onLFODepthControl(component, value)
{
   XFADE1.setAttribute(XFADE1.LFO_mod, value);
   XFADE2.setAttribute(XFADE2.LFO_mod, value);
   XFADE3.setAttribute(XFADE3.LFO_mod, value);
   XFADE4.setAttribute(XFADE4.LFO_mod, value);
};

Content.getComponent("LFO Depth").setControlCallback(onLFODepthControl);


inline function onLFOSpeedControl(component, value)
{
 XFADE1.setAttribute(XFADE1.LFO_speed, value);
   XFADE2.setAttribute(XFADE2.LFO_speed, value);
   XFADE3.setAttribute(XFADE3.LFO_speed, value);
   XFADE4.setAttribute(XFADE4.LFO_speed, value);
};

Content.getComponent("LFO Speed").setControlCallback(onLFOSpeedControl);



//round robin
const var Enable = Content.getComponent("Enable");

const var Cfilters = [Synth.getMidiProcessor("MIDI-Filter1"),
                     Synth.getMidiProcessor("MIDI-Filter2"),
                     Synth.getMidiProcessor("MIDI-Filter3"),
                     Synth.getMidiProcessor("MIDI-Filter4")];
                     
const var Containers = 
		[Synth.getChildSynth("Voice1"),
                 Synth.getChildSynth("Voice2"),
                 Synth.getChildSynth("Voice3"),
                 Synth.getChildSynth("Voice3")];                                          

inline function bCallback(control, value)
{

    for(f in Cfilters)
        f.setBypassed(!value);
        for(f in Containers)
                f.setBypassed(!value);
}

Enable.setControlCallback(bCallback);


namespace EventIdStack
{

    const var MAX_SIZE = 128;
  
    inline function init(data)
    {
        data.reserve(MAX_SIZE);
        
        for(i = 0; i < MAX_SIZE; i++)
        {
            data[i] = [-1, undefined];
        }
    }
    
 
    inline function push(data, eventId, value)
    {
        for(d in data)
        {
            if(d[0] == -1)
            {
                d[0] = eventId;
                d[1] = value;
                return;
            }
        }
        

        Console.assertTrue(false);
    }
    

    inline function pop(data, eventId)
    {
        for(d in data)
        {
            if(d[0] == eventId)
            {
                d[0] = -1;
                return d[1];
            }
        }
        

        Console.assertTrue(false);
    }
}



const var noteOnChannels = [];

EventIdStack.init(noteOnChannels);



// the RR counter
reg rrIndex = 1;function onNoteOn()
{
	// the index is zero based like everything else in good
	// programming, so we need to add one to get the actual
	// channel number
	local d = rrIndex+1;
	
	// Store the value in the MIDIList for the note on
	EventIdStack.push(noteOnChannels, Message.getEventId(), d);
	Console.print(d);
	Message.setChannel(d);
	
	// Cycle through the round robin amount
	if(rrIndex++ >= 4)
	    rrIndex = 1;
}
 
 function onNoteOff()
 {
     local c = EventIdStack.pop(noteOnChannels, Message.getEventId());
 	Message.setChannel(c);
     
 }function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 