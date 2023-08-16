# Darduino

The development environment template for Arduino with Docker.

## Setup

### environment

You can use [`Dev Containers`](https://github.com/microsoft/vscode-dev-containers) to setup the development environment.

Before start, you need to clone this repository and pre-setup by running the following command:

```bash
git clone "https://github.com/dino3616/darduino"
cd "darduino"
cp ".env.template" ".env"
```

You need to press `Shift` + `Cmd` (`Ctrl`) + `P`, and type `Dev Containers: Open Folder in Container...`. Then, select the root directory of this repository.
Now all you have to do is sit back and wait!

### compile and run

Successed to build devcontainer, you can compile and run the program by running the following command:

```bash
make dev
```

## Scripts

This repository provides the following scripts to help your development.

|   Command    | Description                                         |
| :----------: | :-------------------------------------------------- |
| `make build` | Compile the program.                                |
|  `make dev`  | Compile and run the program with a new binary file. |
| `make start` | Run the program with a exist binary file.           |
| `make clean` | Delete the build files.                             |
