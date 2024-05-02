Content.makeFrontInterface(420, 220);

const SpData1 = Engine.createAndRegisterSliderPackData(0);
const var Arpeggiator1 = Synth.getSliderPackProcessor("Arpeggiator1").getSliderPack(1);
const var SliderPack1 = Content.getComponent("SliderPack1");

SliderPack1.referToData(SpData1);
SpData1.linkTo(Arpeggiator1);

const var Knob1 = Content.getComponent("Knob1");
const var Button1 = Content.getComponent("Button1");

inline function onButton1Control(component, value)
{
	if (value == 0)
	   {
		 SpData1.setValueWithUndo(0, Math.randInt(1, 127));
		 SpData1.setValueWithUndo(1, Math.randInt(1, 127));
	  	 SpData1.setValueWithUndo(2, Math.randInt(1, 127));
		 SpData1.setValueWithUndo(3, Math.randInt(1, 127));
   
   		 Knob1.setValueWithUndo(Math.random());
         Console.print(trace(getControlValues()));
         
         }
                
};

Content.getComponent("Button1").setControlCallback(onButton1Control);

const var undoBtn = Content.getComponent("undoBtn");

inline function onundoBtnControl(component, value)
{
    if (value)
    {
	    Engine.undo();  
	    
Console.print(trace(getControlValues()));
	   
    }
};

Content.getComponent("undoBtn").setControlCallback(onundoBtnControl);


inline function onredoBtnControl(component, value)
{
	if (value)
	{
	    Engine.redo();
	    Console.print(trace(getControlValues()));
    }
};

Content.getComponent("redoBtn").setControlCallback(onredoBtnControl);

      	   
inline function getControlValues() {
        return {
            "SliderPack1": SliderPack1.getSliderValueAt(0),
            "SliderPack2": SliderPack1.getSliderValueAt(1),
            "SliderPack3": SliderPack1.getSliderValueAt(2),
            "SliderPack4": SliderPack1.getSliderValueAt(3),

        };

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
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 