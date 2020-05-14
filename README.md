# PixyMaster
Addressable RGB LED Controller
# An ESP8266 based driver board to control WS2812b Individually Addresable RGB LEDs #

Neopixel LEDs aka **WS2812b** addressable RGB LEDs are very fun to play with because it has integrated driver IC built in which allows us to control tons of such LEDs using **single Data line** from the microcontroller. That certainly a great advantage over regular LEDs. But What more interesting is that if it can be control **over the internet**. With that in mind I made this **Neopixel LED driver board**. I have used **ESP8266** as the brain of this project so I can have wifi connectivity as well. But there is more, 

- I have included a **LDR** for controlling the **brightness** automatically, depending on the *ambient light*.
- Along with that there is a **DHT11** sensor for getting the current **Temperature & Humidity**. 
- It also has a **push button** for changing different **modes** and what not. 
- It also has a **I2C port** for connecting additional sensors like **MPU6050 accelerometer & gyroscope sensor or DS3231 RTC sensor**. 
- I added a **barrel jack** for powering the driver board as well as the LEDs.

[tutorial video](https://youtu.be/J-FGCySNeHQ)

[PCB Design Files](https://easyeda.com/Sayantan98/neopixel-controller)

[Buy this Project](https://www.tindie.com/products/19245/)
