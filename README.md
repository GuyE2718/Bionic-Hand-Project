# Bionic Hand Project

In 2020, I designed and built a bionic hand using only a 3d printer, my computer, and some inexpensive parts I found online. This project was one of the first major projects I completed on my own. At the time, I was in the early stages of my coding and 3d printing journey, as I was only 14 and a half years old.

I have always been fascinated by robots that mimic human forms, so it's natural that I became increasingly interested in robotic prosthetics. With this in mind, I decided to try building my own prosthetic hand using inexpensive parts.

![movenew](https://user-images.githubusercontent.com/121691820/210184564-28e1c96d-014e-40ca-a047-c6933a35255d.gif)


Design
-----
The hand consists of three main parts: the palm, fingers, and forearm. These parts were designed using Fusion360 and Blender and printed on a CR10 s4 3D printer. the parts are small in size, any modern 3d printer should be able to print them in around 10 hours.

This design utilizes a single servo motor, as opposed to other designs that require five, in order to reduce costs and make the building process more accessible for consumers. The design is also mirrored, allowing for the creation of left or right versions by mirroring it in a 3D slicer.

The forearm features an attachment slit at the bottom, which can be used to mount the hand on a socket or sleeve for use as a prosthetic.

Electroincs
-----
I had some previous experience with the Arduino microcontroller, so I decided to use the Arduino Nano for this project. It is small (45x18mm) and inexpensive (2.50$).

For the main motor, I chose to use a standard servo motor. Unlike other DC motors, a servo motor can move to specific positions, but only within a range of 180 degrees. This is sufficient for this project, as we don't need a full 360-degree rotation.

To interface with my muscles, I needed a way to detect muscle movement without placing a sensor directly on my palm. After researching how real prosthetics detect muscle movement, I realized that I needed an EMG (electromyography) sensor. These sensors are used to measure the electrical activity of muscles, and I could place it on the part of my forearm next to my elbow to detect movements in the muscles of my palm. This was a cool solution, as it allowed me to detect muscle movements without having to place the sensor directly on my palm. i found a EMG sensor on amzon that interfaces with arduino called MyoWare Muscle Sensor.

Code
-----
The code for this project is pretty straightforward. It defines a servo and some constants for the sensor pins and threshold value. I determined the appropriate threshold value by measuring the sensor value when my hand was open and closed, but it may vary from person to person.

The code then checks if the sensor value exceeds the threshold. If it does, the servo is told to move to the closed position. If not, the hand remains open.

Assembly
-----
#### Lets star by gathering all of the parts.
* all of the printed parts
* arduino nano
* servo motor
* MyoWare Muscle Sensor
* fishing wire
* superglue
* flexible filament

Now that we have all the necessary parts, we can begin building the hand.

To start, we will attach the palm to the forearm using super glue. Be careful not to clog the openings for the wires on the bottom of the palm.

Next, we will secure the fingers to the palm using the two wider holes on both the palm and fingers. Make sure to tie them firmly to prevent any looseness in the finger segments.

We are now halfway through the build. Let's move on to the electronics and wire the Arduino to the servo and sensor according to the diagram provided below:



Now, we can mount the servo onto the forearm using the screws that came with it. The Arduino can be placed either behind or below the servo, depending on your preference.

Finally, we will complete the last step by feeding a fishing wire through the openings at the bottom of the palm, up through the corresponding finger, and tying a knot above it. Once you have fed a wire through each finger, tie them all to the servo arm in the open position. This will allow the fingers to move when the servo arm rotates.

To finish, upload the code onto the Arduino, place the sensor on your forearm, and enjoy your bionic hand!

Thank you for reading! If you have any questions or comments, you can reach me at Guye750@gmail.com.
