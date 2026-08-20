# C++ Utility Library

A reusable **C++ utility library** built to collect common helper functionality that can be reused across console applications and programming projects.

> **Status:** Educational project
>
> The library focuses on reusable programming techniques and learning-oriented utilities. It is not intended to provide production-grade security or cryptographic functionality.

## Overview

The project provides a collection of static utility functions for:

- Random number and character generation
- Word and key generation
- Array creation and manipulation
- Array shuffling
- Overloaded swap operations
- Date-related utilities
- Simple text transformation
- Console formatting helpers

The project was built independently as a practical exercise in reusable C++ code and separating general-purpose utilities from application-specific logic.

## Features

### Random Generation

Generate:

- Random integers within a range
- Lowercase characters
- Uppercase characters
- Digits
- Special characters
- Mixed characters
- Random words
- Structured keys

### Array Utilities

- Fill arrays with random values
- Fill arrays with ordered values
- Print arrays
- Shuffle array elements

### Generic Helpers

- Overloaded `Swap()` functions
- Date swapping
- Text transformation and reversal
- Console tab formatting

## Design

The project currently uses a small, header-based structure:

```text
CPP-Utility-Library/
│
├── MyUtilityLib.h        # Main reusable utility class
├── clsDate.h             # Date-related support
├── Utility Library.cpp   # Demonstration program
├── Utility Library.sln   # Visual Studio solution
├── Utility Library.vcxproj
├── Utility Library.vcxproj.filters
├── .gitignore
└── README.md
```

`MyUtilityLib` contains static helper methods so callers can use the utilities without creating a library object.

## Example

```cpp
#include "MyUtilityLib.h"

MyUtilityLib::Srand();

int number = MyUtilityLib::RandomNum(1, 100);
string key = MyUtilityLib::GenerateKey();

cout << number << endl;
cout << key << endl;
```

## Example: Random Character Types

```cpp
MyUtilityLib::Srand();

char lower = MyUtilityLib::GetRandomCharacter(
    MyUtilityLib::enCharType::SmallChar
);

char upper = MyUtilityLib::GetRandomCharacter(
    MyUtilityLib::enCharType::CapitalChar
);
```

## Technologies

- C++
- Object-oriented programming
- Static utility methods
- Arrays
- Function overloading
- Enumerations
- Standard library facilities
- Visual Studio

## Learning Goals

This project was built to practice:

- Designing reusable functions and classes
- Reducing duplicated code
- Function overloading
- Enumerations for configurable behavior
- Array manipulation
- Random data generation
- Separating reusable utilities from application-specific code

## Important Note About Encryption

The `Encryption()` and `Decryption()` functions implement a simple character-shift transformation for educational purposes only.

They are **not encryption suitable for protecting passwords, credentials, or sensitive data** and should not be used as a security mechanism.

## Running the Demo

### Requirements

- Windows
- Visual Studio with C++ development tools

### Steps

1. Clone the repository.
2. Open `Utility Library.sln` in Visual Studio.
3. Build the solution.
4. Run the console application to see the utilities in action.

## Reusing the Library

To use the utilities in another C++ project, include the required headers:

```cpp
#include "MyUtilityLib.h"
#include "clsDate.h"
```

Then call the static utility methods directly through `MyUtilityLib`.

## Author

**Raed Basim Hillel**  
[GitHub](https://github.com/Raed885)
