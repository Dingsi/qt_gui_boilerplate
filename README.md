### Debian 12 (Bookworm) / Ubuntu 22.04+
```bash
# Install required packages
sudo apt update
sudo apt install build-essential cmake qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools

# Verify Qt installation
qmake --version
```

### Other Distributions

#### Ubuntu 20.04 or older
```bash
sudo apt update
sudo apt install build-essential cmake qt5-default qtbase5-dev
```

#### Fedora
```bash
sudo dnf groupinstall "Development Tools"
sudo dnf install cmake qt5-qtbase-devel
```

#### Arch Linux
```bash
sudo pacman -S base-devel cmake qt5-base
```

# Build Instructions
After installing the dependencies:
```bash
# Configure
cmake -B build -S .

# Build
cmake --build build
```

# Troubleshooting

If you encounter Qt-related issues:

1. Check if Qt is properly installed:
```bash
qtchooser -print-env
```

2. Verify Qt version:
```bash
qmake --version
```

3. If CMake can't find Qt, you might need to specify the Qt path:
```bash
# Example path - adjust according to your system
cmake -B build -S . -DQt5_DIR=/usr/lib/x86_64-linux-gnu/cmake/Qt5
```

4. Check if pkg-config can find Qt:
```bash
pkg-config --modversion Qt5Core
```