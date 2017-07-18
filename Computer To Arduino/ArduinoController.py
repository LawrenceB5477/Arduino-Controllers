import serial

ser = serial.Serial("COM3", baudrate="9600" )

while 1:
    output = raw_input("Enter 0 or 1: ")
    ser.write(output)
