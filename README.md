<!-- README.md -->

<h1 align="center" style="color: #4CAF50;">Arduino Bluetooth RC Car with NeoPixel LED Strip</h1>

<p align="center" style="font-size: 1.2em;">An Arduino-based Bluetooth RC car controllable via an Android device, featuring customizable NeoPixel LED lighting effects.</p>

<!-- Images side by side -->
<p align="center">
    <table>
        <tr>
            <td><img src="RC Car images and videos/IMG_8977.jpg" alt="RC Car" width="300"/></td>
            <td><img src="RC Car images and videos/IMG_0090.jpg" alt="RC Car" width="300"/></td>
            <td><img src="RC Car images and videos/IMG_0078.jpg" alt="RC Car" width="300"/></td>
        </tr>
    </table>
</p>

---



<h2 style="color: #f39c12;">Components</h2>
<ul style="font-size: 1.1em;">
    <li>Arduino Uno</li>
    <li>L293D Motor Driver</li>
    <li>HC-05 Bluetooth Module</li>
    <li>Adafruit NeoPixel LED Strip</li>
    <li>2 DC Motors</li>
    <li>Battery Pack</li>
    <li>Wires and Connectors</li>
</ul>

---

<h2 style="color: #f39c12;">How to Run</h2>

1. **Clone the repository:**

    ```sh
    git clone https://github.com/BENi-Aditya/Arduino-Bluetooth-RC-Car.git
    ```

2. **Navigate to the project directory:**

    ```sh
    cd Arduino-Bluetooth-RC-Car
    ```

3. **Open the Arduino IDE:**

    ```sh
    arduino Arduino_Bluetooth_RC_Car.ino
    ```

4. **Connect your Arduino Uno to your computer.**

5. **Select the correct board and port:**
    - Go to `Tools > Board > Arduino/Genuino Uno`
    - Go to `Tools > Port > (select the appropriate port)`

6. **Upload the code to the Arduino:**

    ```sh
    Click on the Upload button (right arrow) in the Arduino IDE.
    ```

7. **Power the Arduino and components:**
    - Connect the battery pack to the Arduino.
    - Ensure all components are properly powered.

---

<h2 style="color: #f39c12;">Usage</h2>

<ul style="font-size: 1.1em;">
    <li>Install any Bluetooth RC car app on your Android device.</li>
    <li>Pair your Android device with the HC-05 Bluetooth module.</li>
    <li>Use the app to send commands to the car for forward, backward, left, and right movements.</li>
    <li>Use the app to control the NeoPixel LED strip, changing colors and lighting effects.</li>
</ul>

---

<h2 style="color: #f39c12;">Features</h2>

<ul style="font-size: 1.1em;">
    <li>Bluetooth control for easy operation using an Android device.</li>
    <li>Forward, backward, left, and right movement controls.</li>
    <li>Customizable NeoPixel LED lighting effects controlled via the app.</li>
</ul>

---

<h2 style="color: #f39c12;">Need for the Project</h2>
<p style="font-size: 1.1em;">This project demonstrates the integration of various electronic components and programming to create a functional and interactive Bluetooth-controlled RC car. It showcases the potential of combining microcontroller programming with mobile app control and customizable LED effects, providing a practical application in robotics and embedded systems.</p>

---

<h2 style="color: #f39c12;">Contributions</h2>
<p style="font-size: 1.1em;">We welcome contributions from the community to enhance this project. Feel free to fork the repository, make your changes, and submit a pull request. Please ensure your contributions align with the project's goals and adhere to our coding standards.</p>

<p style="font-size: 1.1em;">Here's how you can contribute:</p>
<ul style="font-size: 1.1em;">
    <li>Fork the repository: <a href="https://github.com/BENi-Aditya/Arduino-Bluetooth-RC-Car">https://github.com/BENi-Aditya/Arduino-Bluetooth-RC-Car</a></li>
    <li>Create a new branch: <code>git checkout -b feature-branch-name</code></li>
    <li>Make your changes and commit them: <code>git commit -m 'Description of your changes'</code></li>
    <li>Push to the branch: <code>git push origin feature-branch-name</code></li>
    <li>Submit a pull request</li>
</ul>
