# **REQUIREMENTS**

# **INTRODUCTION**

    .This project deals with the designing of a seven-segment display(SSD) I2C driver using ATmega328.
    .In most applications, however, using a single-digit seven-segment display (SSD), may not be sufficient to display the
      entire information, hence multiple SSD units are connected in parallel.
    .Therefore, when using a microcontroller to operate a seven-segment LED display, 8 pins are required 
     to control individual LEDs in the display, which can be brought down to 4 using a decoder.
     
     
# **SWOT ANALYSIS**

#  **STRENGTH**
 
   .ATmega328P is a high performance yet low power consumption 8-bit AVR microcontroller.
   .That’s able to achieve the most single clock cycle execution of 131 powerful instructions
    thanks to its advanced RISC architecture.
   .It can commonly be found as a processor in Arduino boards such as Arduino Fio and Arduino Uno.
   
 # **weakness**

   .Processors are simpler to use, with the usage of 8bit and 16bit instead of 32/64bit which are more complex.
   .Readily usable without additional computing components with 32k bytes of onboard self-programmable flash program memory
    as well as 23 programmable I/O lines Code Efficient.
   .All 31 registers are directly connected to the arithmetic logic unit (ALU), making it 10 times faster than conventional CISC microcontrollers
   .Optimized for AVR enhanced RISC instruction set
   
  # **opportunity**

  ATmega328P is a low-power CMOS 8-bit microcontroller based on the AVR enhanced RISC architecture. The ATmega328P achieves throughputs approaching 1MIPS per MHz By executing     powerful instructions in a single clock cycle. This allows system designers to optimize power consumption versus processing speed very easily. ATMega328p is one of the famous   MCUs of Atmel because of its use in the Arduino UNO board. ATmega328P is designed with low current consumption features. The chip contains 32 kilobytes of internal flash         memory, 1KB of EEPROM, and 2KB of SRAM.

 # **THREAT**
 
  .High up-front costs
  .Performance standardization has not yet been streamlined.
  
# **4W's & 1H**

  # **WHY**
   
   .In most applications, however, using a single-digit seven-segment display (SSD),
   .May not be sufficient to display the entire information, hence multiple SSD units are connected in parallel.
   .In order to display different characters, symbols or numbers,
   .The data being displayed on each SSD has to be different.
   
   # **WHAT**
   
   .In the case of interfacing a microcontroller with an SSD display,
   .Using another microcontroller as a driver which acts as a peripheral to the main microcontroller can be very helpful.
   
   # **WHEN**
  
   .When connected with the appropriate I2C master device which identifies its slave address,
   .The data sent from the master (in this case light intensity) is printed on to the display.
   
   # **HOW**
  
   .Through seven sigment display we can see the digital time.
   
  # **LOW LEVEL REQUIREMENT**
  
   **HADWARE COMPONENT**
   
     .Hardware components
     .ATmega328
     .7 Segment LED Display
     .General Purpose Transistor NPN
     .Through Hole Resistor, 680 ohm
     .16 MHz Crystal
     .Capacitor 22 pF
     .Capacitor 10 µF
     .Capacitor 100 nF
     .Resistor 10k ohm
     .SparkFun USB to Serial Breakout - FT232RL
     .SparkFun USB to Serial Breakout - FT232RL
     
   **HIGH LEVEL REQUIREMENT**
   
     .AVR compiler,simule ide
