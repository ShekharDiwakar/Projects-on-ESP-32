ESP32 is a series of low-cost, low-power system on a chip microcontrollers with integrated Wi-Fi and dual-mode Bluetooth.
And when compared it with Arduino then it has some exta wireless connectivity features like Bluetooth and Wi-Fi but in most of the Arduino module we dont find these wireless connectivity features.
To do above Projects install Arduino IDE in your system.
After that follow these steps to install ESP-32 in your Arduino IDE
1: In arduino IDE,go to File>Preferences, then do these  things
● In the “Additional Boards Manager URLs” field paste this below url:
● https://dl.espressif.com/dl/package_esp32_index.json
● Press OK
2:Installing ESP32 board
● In the IDE ,go to Tools>Boards>Board manager
● Type “esp32” in the search box
● Click esp32 by Espressif Systems” and Install the latest version(1.0.4)
3:Selecting ESP32 Board
● In the IDE ,go to Tools>Boards>ESP32 Dev module
4:Selecting the Partition scheme (flash memory)
● In the IDE, go to tools, partition scheme in that, and select 16 MB Flash (3MB APP/9MB FATFS)
5:Selecting the Flash Size
● In the IDE ,go to Tools, select Flash Size, Choose 16 MB (128Mb)

NOW YOU ARE ALL SET TO MAKE YOUR PROJECTS.
