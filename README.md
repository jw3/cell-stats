cellular signal statistics
===

log and accumulate cellular signal stats

- particle boron
- featherwing oled
- conan particle

### conan

`VERSION_STRING=1.4.2 PLATFORM=boron conan install . -if cmake-build-debug -s compiler.version=5.3 -s os=Particle -s os.board=boron -s arch=nRF52840 -s compiler.libcxx=libstdc++11`

### cmake

`cmake -DCMAKE_C_COMPILER=arm-none-eabi-gcc -DCMAKE_CXX_COMPILER=arm-none-eabi-g++ <project-dir>`

### clion

just set the toolchain to `arm-none-eabi`
