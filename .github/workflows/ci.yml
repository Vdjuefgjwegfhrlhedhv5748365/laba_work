name: CMake CI

on:
  push:
    branches: [ main, develop ]
  pull_request:
    branches: [ main, develop ]

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v4

    - name: Configure CMake
      run: cmake -B build -S src

    - name: Build
      run: cmake --build build

    - name: Upload executable
      uses: actions/upload-artifact@v4
      with:
        name: my-program
        path: build/main

