# Chess Game

## Installing Dependencies on Linux

You can install these dependencies using the following commands:

```sh
sudo apt-get update
sudo apt install freeglut3-dev libglew-dev libglm-dev
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