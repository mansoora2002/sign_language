import serial
import pyttsx3

# Configure the serial port
arduino_port = 'COM10'  # Replace with the correct port for your Arduino
baud_rate = 9600

engine = pyttsx3.init()



# Open the serial port
ser = serial.Serial(arduino_port, baud_rate)

try:
    while True:
        # Read data from Arduino
        data = ser.readline().decode().strip()  # Decode the bytes and remove whitespace
        print(f"Data received : {data}")
        engine.say(data)
        engine.runAndWait()

except KeyboardInterrupt:
    print("Program stopped by the user.")

# Close the serial port and database connection
ser.close()
