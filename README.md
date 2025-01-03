# Chess Game

## Installing Dependencies on Ubuntu

By following these steps, you will set up the required libraries (GLUT, GLEW, GLM, OpenGL) and development tools (g++, make, cmake) on Ubuntu.

```sh
sudo apt update
sudo apt install build-essential libgl1-mesa-dev libglu1-mesa-dev freeglut3 freeglut3-dev libglew-dev libglm-dev mesa-utils cmake
```

## Check installation

Run glxinfo to check if OpenGL is properly installed and supported. This will show you the OpenGL version and other related details. Look for entries like OpenGL version string and OpenGL renderer string.
```sh
glxinfo | grep "OpenGL"
```

Run the simple OpenGL demo glxgears to check if OpenGL rendering works on your system. If the gears appear and rotate, OpenGL is working correctly.
```sh
glxgears
```

## Build the game

To build the game, use the following commands:

```sh
mkdir build
cd build
cmake ..
make
```

## Running the game

After building the project, you can run the game using the following command:

```sh
./chess
```
