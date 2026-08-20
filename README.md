# C++ Utility Library

A small, reusable C++ utility library built independently to practice reusable abstractions, function overloading, arrays, random generation, and date utilities.

> Educational project — the text transformation functions are a Caesar-shift demonstration, not real cryptography.

## Features

- Random integers, characters, words, and structured keys
- Array filling, printing, and Fisher-Yates shuffling
- Overloaded `Swap()` helpers
- Date swapping through `clsDate`
- Simple Caesar-shift transformation for educational purposes
- Console formatting helpers

## Structure

```text
CPP-Utility-Library/
├── MyUtilityLib.h          # Reusable utility class
├── clsDate.h               # Date support
├── main.cpp                # Demonstration program
├── UtilityLibrary.sln      # Visual Studio solution
├── UtilityLibrary.vcxproj  # Visual Studio project
├── UtilityLibrary.vcxproj.filters
├── .gitignore
└── README.md
```

`MyUtilityLib` exposes static methods so the caller does not need to instantiate the utility class.

## Example

```cpp
#include "MyUtilityLib.h"

MyUtilityLib::Srand();

int number = MyUtilityLib::RandomNum(1, 100);
std::string key = MyUtilityLib::GenerateKey();

std::cout << number << '\n';
std::cout << key << '\n';
```

## Design Notes

The library intentionally uses simple C++ constructs because the goal is to practice reusable components and clear interfaces. The current implementation uses raw arrays in several APIs to match the original learning objective.

The shuffle implementation uses the Fisher-Yates approach rather than repeatedly selecting arbitrary pairs.

## Important Security Note

`Encryption()` and `Decryption()` implement a Caesar shift by three characters. This is useful for demonstrating reversible transformations, but it provides no meaningful security and must not be used for passwords, authentication tokens, or sensitive data.

## Build and Run

Requirements:

- Windows
- Visual Studio with the C++ desktop development workload

1. Clone the repository.
2. Open `UtilityLibrary.sln` in Visual Studio.
3. Build the solution.
4. Run the console application.

## Author

**Raed Basim Hillel**  
[GitHub](https://github.com/Raed885)
