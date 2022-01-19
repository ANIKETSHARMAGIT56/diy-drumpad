import serial
from pygame import mixer
mixer.init()
arduinodata= serial.Serial("/dev/ttyACM0",11200)
while True:
    hello=str(arduinodata.readline()).replace("\\r","").replace("\\n","").replace("'","").replace("b","")
    print(hello)
    if (hello=='1'):
        mixer.Channel(1).play(mixer.Sound('1.wav'))
    if (hello=='2'):
        mixer.Channel(2).play(mixer.Sound('2.wav'))
    if (hello=='3'):
        mixer.Channel(3).play(mixer.Sound('3.wav'))
    if (hello=='4'):
        mixer.Channel(4).play(mixer.Sound('4.wav'))
    if (hello=='5'):
        mixer.Channel(5).play(mixer.Sound('5.wav'))
    if (hello=='6'):
        mixer.Channel(6).play(mixer.Sound('6.wav'))