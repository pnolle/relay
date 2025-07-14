# MIDI to Relay

Using a Saintsmart 8-Channel 5V 2A Solid State Relay with Teensy 4.0

### Why Teensy?
Because it has a native USB MIDI implementation, which is built into its core libraries and hardware USB stack.

## MidiRelayControl
Sending simple on/off commands from an MIDI track in my DAW (Reaper btw, which is amazing ;)).

```
NoteOn = light on
NoteOff = light off

C3 (48) = relay 1  
C#3 (49) = relay 2  
D3 (50) = relay 3  
D#3 (51) = relay 4  
E3 (52) = relay 5  
F3 (53) = relay 6  
F#3 (54) = relay 7  
G3 (55) = relay 8
```