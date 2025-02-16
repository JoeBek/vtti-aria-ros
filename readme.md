# Summary

This project's purpose is to use the Project Aria glasses to create a navigational assistance server that allows for real-time localization and pathfinding in a pre-determined 3d scene.

---

The entire system has the following ideal structure:

input: raw Aria glasses sensor data
output: path and location information for client to display/output to user. 

---

The project is broken down into several packages. These packages each contain functionality necessary to a core piece of the system.

The current plan for package structure can be broken down as follows:

- psuedo-client: accepts filepaths to processed mps data, streams data as if it were processed and real-time (simulates io and sensor-server)
- localization-server: accepts pre-processed data in real time and converts it into a pose in the scene
- sensor-sever: accepts un-processed on-line sensor data and processes it into packaged data structures that are easier to use downstream
- aria_ioctl: establishes connection bridge between ros2 server and sensor stream

# build and configure



# usage
