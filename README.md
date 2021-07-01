# Contents:
1. A circuit design and an Arduino code to operate 12 volts DC motors that are controlled by a potentiometer.
2. Specifications of a 12 volts battery power supply with a charging circuit.
3. A design for robot-eyes using LEDs that are protected with a voltage regulator.

## #1 Description and Instructions of the project “Controlling 12V DC Motors”.
The aim of this project is to control two DC motor in both directions using a potentiometer. The circuit was constructed using an Arduino, L293D IC motor driver, potentiometer, two 12 volts DC motor, and 12 volts battery. Basically, all the input and enable pins of the IC to the digital pins 13, 12, 11, 9, 8, and 7 on the Arduino, the output pins to the motors, the power pin 16 of the IC to the 5 volts, the power pin 8 on the IC to the 12 volts battery, and the signal pin of the potentiometer to the analog pin A0. 

After the construction of the circuit, the Arduino was coded in a way to implement both directions using one potentiometer. Therefore, the potentiometer was split into two sections that represents clockwise and counterclockwise rotations. If the potentiometer is rotated counterclockwise, both motors will deaccelerate the clockwise rotation to a point that the motor will stop rotating and then a counterclockwise rotation will take place. Similarly, if the potentiometer was rotated clockwise. The maximum voltage on the output for the motors is 10.5 volts, however, it depends on the value of the power supply that is connected through pin 8 of the IC. 

### Module on TinkerCAD: [Controlling DC motors with a potentiometer](https://www.tinkercad.com/things/g6XAcukzmeK-copy-of-controlling-dc-motors-with-a-potentiometer/editel?sharecode=zcTKnUlGvD35ry3nbc0peD9APO39wzESEFaiKyNwe20)

## #2 Description and Instructions of the project “Battery specifications and charging circuit”.
The objective of this project is to choose a portable power source to run two 12 volts motors for approximately 2 hours and to supply other components if necessary. Here is a list of the components’ current consumption of what the battery will be supplying:
- L293D IC Motor Driver: 600 mA.
- Arduino uno: 200 mA.
- Two 12V DC Motors: 2 A.
- Total: 2.8 A

The recommended battery is 12 volts with a capacity of 9 Ah. Moreover, it weights only 2 Kg which is outstanding. If the battery capacity is divided by the total consumption of all components, the result will be the duration in which the battery will stand without the need of charging. In our situation, theoretically, the battery would stand approximately 3.21 hours, which is 3 hours and 12 minutes.

To charge the battery from 220 volts AC plug, a circuit was constructed using a transformer, a capacitor, an LM7812 voltage regulator, and four silicon diodes to form a full bridge rectifier. The 220V AC plug is connected directly to the transformer, which has primary-to-secondary turns ratio of 16, to step down the voltage to 13.75V and then a full bridge rectifier will consume 1.4V which yields 12.134V to be smoothed by a 100uF capacitor before it is regulated. Then, the output of the regulator is connected to a 1KΩ resistor. The output power on Multisim is approximately 144 mW, however, practically, if it is true, just connect a current amplifier in order to increase the power since we need the voltage to stay at 12V to charge the battery.

## #3 Description and Instructions of the project “A design for robot-eyes using LEDs that are protected with a voltage regulator”.
The purpose of this project is to design eyes for a robot that is capable to be powered by 4V to 12V. The eyes are represented by red LEDs and controlled by a switch that opens the circuit if the eyes are desired to be off and vice versa. The design consists of two main parts which are a voltage regulator and the LEDs. The voltage regulator uses the Zener diode simple principle; however, a transistor is added to authorize more current to flow. Additionally, the capacitors are used to stabilize and filter the signal. Regarding the eyes design, a parallel connection was picked over the series to prevent any voltage division or a breakage in the circuit. Most importantly, the resistors, which are connected in series with the LEDs, are to minimize the current through the LEDs since the maximum current an LED could handle is 20 mA and a minimum of 5 mA. Hence, the resistors must be matched at values between 50 to 200 ohms to avoid any current division or not maintaining the working region of the LEDs. 



