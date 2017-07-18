import serial
ser = serial.Serial("COM3", baudrate = 9600, timeout=1)
counter = 0
while 1:
    arduinoData = ser.readline()
    if len(arduinoData) > 0:
         data = int(arduinoData[0])
         counter += data
         print "Blinked {} time/s!".format(counter)
