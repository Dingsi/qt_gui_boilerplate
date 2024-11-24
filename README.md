# Qt GUI Application Boilerplate

A minimal, modern Qt GUI application boilerplate using CMake. Cross-platform compatible (Windows, Linux, macOS).

## Features

- C++17 codebase
- CMake-based build system
- Platform-specific dependency management:
  - Windows: vcpkg
  - Linux: system packages
  - macOS: Homebrew
- Automated builds and releases via GitHub Actions
- Cross-platform support (Windows, Linux, macOS)

## Prerequisites

### Windows
- Visual Studio Build Tools (MSVC)
- CMake (3.15 or higher)
- vcpkg
- Git

### Linux
- GCC or Clang
- CMake (3.15 or higher)
- Qt5 development packages
- Git

### macOS
- Xcode Command Line Tools
- CMake (3.15 or higher)
- Homebrew
- Git

## Getting Started

Clone this repository:
```bash
git clone https://github.com/dingsi/qt_gui_boilerplate.git
cd qt_gui_boilerplate
```

After building, you can find the executable in:

- Windows: `build/Release/sample-qt-app.exe`
- Linux/macOS: `build/sample-qt-app`

For detailed setup instructions and requirements, see the [Setup Instructions](#setup-instructions) section below.

## Setup Instructions

### Windows
1. Install Visual Studio Build Tools
2. Install CMake
3. Clone and setup vcpkg:
```batch
git clone https://github.com/Microsoft/vcpkg.git
.\vcpkg\bootstrap-vcpkg.bat
```
```powershell
# Set VCPKG_ROOT environment variable to your vcpkg directory
$env:VCPKG_ROOT="C:\path\to\vcpkg"
$env:PATH="$env:VCPKG_ROOT;$env:PATH"
```
4. Configure and build:
```batch
cmake -B build -S .
cmake --build build --config Release
```
For Visual Studio Code see [Tutorial: Install and use packages with CMake in Visual Studio Code](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started-vscode?pivots=shell-powershell)

### Linux
1. Install required packages:

For Ubuntu/Debian:
```bash
sudo apt update
sudo apt install build-essential cmake qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools
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

### macOS
1. Install Xcode Command Line Tools:
```bash
xcode-select --install
```

2. Install Homebrew if not already installed:
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

3. Install dependencies:
```bash
brew install cmake qt@5
echo 'export PATH="/usr/local/opt/qt@5/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```

4. Configure and build:
```bash
cmake -B build -S .
cmake --build build
```

## Project Structure

```
.
├── .github/
│   └── workflows/            # GitHub Actions workflows
├── src/                      # Source files
│   ├── main.cpp
│   ├── mainwindow.h
│   └── mainwindow.cpp
├── .gitignore               # Git ignore file
├── CMakeLists.txt           # CMake build configuration
├── README.md
└── vcpkg.json              # vcpkg dependencies (Windows)
```

## Development

### IDE Setup
- Visual Studio Code with following extensions:
  - C/C++
  - CMake
  - CMake Tools

### Building

Debug build:
```bash
# Windows
cmake --build build --config Debug
# Linux/macOS
cmake -B build -S . -DCMAKE_BUILD_TYPE=Debug
cmake --build build
```

Release build:
```bash
# Windows
cmake --build build --config Release
# Linux/macOS
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Automated Builds

GitHub Actions automatically:
- Builds the project on every push and pull request
- Creates releases when a version tag is pushed
- Provides artifacts for all platforms
- Runs on:
  - Windows (MSVC)
  - Linux (GCC and Clang)
  - macOS (Clang)

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.