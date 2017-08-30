# Mechanical keyboard project

I assembled my own mechanical keyboard made from individually sourced parts. Why build your own keyboard? Because it's fun, and the customization options are endless! I first got into this hobby when I stumbled upon the mechanical keyboard enthusiasts community on www.reddit.com/r/mechanicalkeyboards. While you can get some great pre-assembled keyboards from various online stores, I realized that I would probably get most value out of it if I built my own. 

The first step to building my own keyboard was to decide on which size I want. There are several sizes to choose from, the standard one being 100%, 75%, 60% and 40%. A 100% keyboard is the size you are most likely familiar with, with a top F1-12 button row, arrows keys and numpad. The 75% size gets rid of the F1-12 row and the numpad, while the 60% scales it down further by removing the arrow keys and home/end buttons. The 40% even removes the 1-9 button row as well. I decided to go for a 60% size keyboard, since a lot of good circuit boards and cases support this layout. It is also very portable, and just looks really good.

Here is a list of all the parts that I had to buy:

- Programmable Circuit Board (PCB)
- Key switches
- Keycaps
- LED's
- Plate
- Stabilizers
- Case 

## PCB

The Programmable Circuit Board is where the controller and all the circuits are; it's the logic of the board. There are many different PCB's to choose from, each for a different price and with different features. I went with the Satan GH60, which is a popular PCB for 60% boards. It has support for single-color backlighting, RGB underglow and is fully programmable. This means that you can program each button press in the board to do pretty much whatever you want. This is also a big advantage of building your own keyboard, since most ready-made keyboards will not give you this amount of programmability. 

## Key switches

The switches are the parts that let current flow through the circuit when you press a specific key. The only things that matters regarding the switches is how they feel to type on, which can vary a lot between brands and models. The Cherry MX brand is the most common one used, and therefore most widely supported. I tested a bunch of different Cherry switches before finally settling on the Tactile Grey switches. These switches are heavy and has a nice tactile bump when you press it.

## Key caps

These are the plastic caps that you touch when you type, and they go on top of the key switches. They come in different profiles, colors, materials and styles. I chose to go with the Cherry profile, which is a common profile that I find comfortable. The key caps that I bought are made out of PBT plastic, which has a nice feel and also lasts a very long time. 

## LEDs

The LEDs are what makes the backlight under the key caps. I bought regular 3mm red LEDs. They should be flangeless, but all I could find in my local store was LEDs with flange, so I had to remove the flanges manually with a file.

## Plate

The plate is a flat metal piece that sits between that switches and the PCB. The switches are mounted onto the plate, and the pins of the switches reaches the PCB under it. Since the plate is visible I decided to choose color that would fit the board. Since I was going with a black/red theme, I bought a red plate.

## Stabilizers

These are the parts that go under the key caps for the larger keys, such as the space bar and some modifiers. This ensures that the whole key gets pressed down even if you press on the far side of the key. I bought cherry stabilizers, but I had a lot of problems with them so I wish I had gotten the costar ones instead. 

## Case

This is the part that encapsulates the underside of the board, and protects the PCB. I decided to get a wood case that comes with a lid, which would make it easier for me to carry the keyboard with me. 

## Programming the keyboard

QMK firmware was used for programming the board. It is a framework that makes programming the board pretty easy. Once the keymap.c file is done, it needs to be flashed into the board.

Flashing the pcb:
- Go into keyboard/satan folder
- Put pcb into bootloader mode
- sudo make clean
- sudo make KEYMAP=<keymap>
- sudo make KEYMAP=<keymap> dfu



