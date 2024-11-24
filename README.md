# Qt GUI Application Boilerplate

A minimal, modern Qt GUI application boilerplate using CMake. Cross-platform compatible with platform-optimized dependency management.

## Prerequisites

### Windows
- Visual Studio Build Tools (MSVC)
- CMake (3.15 or higher)
- vcpkg
- Qt5 (installed via vcpkg)

### Linux
- GCC or Clang
- CMake (3.15 or higher)
- Qt5 development packages

## Setup Instructions

### Windows
1. Install vcpkg and set VCPKG_ROOT environment variable
2. Install Qt5 using vcpkg:
```bash
vcpkg install qt5-base:x64-windows
```
3. Configure and build:
```bash
cmake -B build -S .
cmake --build build --config Release
```

### Linux
1. Install Qt development packages:

For Ubuntu/Debian:
```bash
sudo apt update
sudo apt install build-essential cmake qt5-default qtbase5-dev
```

For Fedora:
```bash
sudo dnf groupinstall "Development Tools"
sudo dnf install cmake qt5-qtbase-devel
```

For Arch Linux:
```bash
sudo pacman -S base-devel cmake qt5-base
```

2. Configure and build:
```bash
cmake -B build -S .
cmake --build build
```

## Project Structure

```
.
├── .vscode/                  # VS Code configuration
├── src/                      # Source files
│   ├── main.cpp
│   ├── mainwindow.h
│   └── mainwindow.cpp
├── .gitignore
├── CMakeLists.txt           # CMake build configuration
├── README.md
└── vcpkg.json              # Windows-specific vcpkg dependencies
```

## Development Notes

### Windows
- Uses vcpkg for dependency management
- Requires VCPKG_ROOT environment variable
- Uses MSVC compiler

### Linux
- Uses system Qt packages
- Uses system's default compiler (typically GCC)
- No vcpkg required

## Build Configuration

### Windows
```bash
# Debug
cmake --build build --config Debug
# Release
cmake --build build --config Release
```

### Linux
```bash
# Debug
cmake -B build -S . -DCMAKE_BUILD_TYPE=Debug
cmake --build build
# Release
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release
cmake --build build
```