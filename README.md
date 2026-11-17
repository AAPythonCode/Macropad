# Macropad V1
### A message before we begin
Hey! I'm Ayaan Dhir, a coding and hacking enthusiast who has made a couple projects (and broken them too 😜)! I love creating useful things for the better, and here's my shot at it!

### What is it?
Traditionally, macropads are used to create shortcuts for simply but repetitive tasks, such as opening an app, creating a new tab in a web browser, and whatever you desire. Here are a few examples of macropads:
 - [A macropad made by Josean Martinez](https://www.youtube.com/watch?v=diYOzP-iSxE)
 - [Another macropad sold by KeebMonkey](https://www.keebmonkey.com/products/megalodon-triple-knob-macro-pad?variant=42941871194327&country=US&currency=USD&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AYCX9vIMrqfQk3cZqAZ4a6i6JKDIMnkdSJIRdqaNCbeB5PJxPyhhItix350)

Pretty cool, huh?

### BOM (Bill Of Materials)

Do it yourself (or admire the images below :)

| Item | Manufacturer | Price | Link |
|------|-------------|--------|------|
| Cherry MX Switches | AliExpress | $3.65 | [Link](https://shorturl.at/ydW2y) |
| Keycaps | AliExpress | $2.47 | [Link](https://shorturl.at/R5muk) |
| Diodes | AliExpress | $1.56 | [Link](https://shorturl.at/MqbZW) |
| OLED (0.91") | AliExpress | $3.38 | [Link](https://shorturl.at/dDBxE) |
| Rotary Encoder | AliExpress | $2.89 | [Link](https://shorturl.at/HBawA) |
|ESP32-C3 Super Mini | AliExpress | $2.69 | [Link](https://shorturl.at/nDMiV) |
| PCB | Depends | $12.04 | N/A |

### How do I make it?
It's... actually pretty simple! You have to

- Use the gerber files from this repository to order the PCB
- Order the components in the BOM
- Solder on the components into their respective places
> [!IMPORTANT]
> Solder on the diodes with the anode (+) on the right hole and the cathode (-) on the left for each diode!
- Put on the keycaps
- Install the code from this repository onto the ESP32 using Arduino IDE (Here's the (install link)[https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.11_macOS_arm64.dmg] to install Arduino IDE.)
> [!NOTE]
> Feel free the change the code any way you like! This macropad is powered by a ESP32-C3, after all :)
- You're done!

### What does it look like?
Here's the images!

