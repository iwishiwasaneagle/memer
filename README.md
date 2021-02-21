![MEMER logo](images/logo.png)

# memer
![Tests](https://github.com/iwishiwasaneagle/memer/workflows/Tests/badge.svg) [![codecov](https://codecov.io/gh/iwishiwasaneagle/memer/branch/master/graph/badge.svg?token=970I6T4QV0)](https://codecov.io/gh/iwishiwasaneagle/memer) [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

# Usage
### UpPeR LoWeR 
```bash
$ memer -u "hello there"
HeLlO ThErE
```
### ˢᵘᵖᵉʳˢᶜʳᶦᵖᵗ
```bash
$ memer -s "hello there"
ʰᵉˡˡᵒᵗʰᵉʳᵉ
```
### W I D E
```bash
$ memer -w "hello there"
H E L L O   T H E R E
```

# Installation

```bash
cmake -S . -B build
sudo cmake --build build --target install
```

# Tests

```bash
cmake -S . -B build -DMAKE_TESTING=1
cmake --build build --target check
```

# Contributing

Go HAM
