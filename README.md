# Project — C++ Utility Library

## Description

The **Utility Library** is a reusable C++ helper library that collects common operations used by console applications and small programming projects. It provides random-value generation, key and word generation, array helpers, overloaded swap functions, simple text transformation, and tab formatting.

The project includes the `MyUtilityLib` class, a companion `clsDate` class, and a small executable that demonstrates the available functions.

## Project Objectives

The main objectives of this project are to:

- Build a reusable collection of everyday C++ helper functions.
- Practice static utility methods and enumerated character categories.
- Generate random numbers, characters, words, and formatted keys.
- Work with arrays through filling, printing, swapping, and shuffling operations.
- Reuse overloaded functions for multiple data types.
- Separate general-purpose helpers from application-specific business logic.

## System Overview

The library supports the following operations:

- Seed the pseudo-random generator.
- Generate random integers inside a range.
- Generate lowercase, uppercase, special, digit, or mixed characters.
- Generate words and structured keys.
- Fill arrays with random or ordered values.
- Print and shuffle arrays.
- Swap integers, booleans, characters, strings, and dates.
- Apply and reverse a simple character-shift transformation.
- Generate tab indentation for formatted console output.

The included executable demonstrates random values, generated keys, array shuffling, and helper methods in a console environment.

## Architecture

```text
Utility Library
├── MyUtilityLib
│   ├── Random number and character generation
│   ├── Word and key generation
│   ├── Array filling, printing, and shuffling
│   ├── Overloaded swap functions
│   ├── Text transformation helpers
│   └── Console-formatting helpers
├── clsDate
│   └── Date-related utility support
└── Demo Application
    └── Utility Library.cpp
```

The library is implemented as a class of static methods. This makes the helpers directly callable from a program without requiring a library object for every operation.

## Technologies Used

- **C++** with reusable header-based utilities.
- **Pseudo-random generation** using the standard library facilities available in the project.
- **Arrays and overloaded functions** for practical data manipulation.
- **Visual Studio solution and project files** for compilation and testing.
- **Console output** for demonstrations and generated results.

## Features Implemented

| Feature | Description | Practical use |
| --- | --- | --- |
| Random numbers | Generate integers between two limits. | Test data and simulations |
| Random characters | Generate lowercase, uppercase, special, digit, or mixed characters. | Sample identifiers and strings |
| Word generation | Build words with a selected character type and length. | Test values and demonstrations |
| Key generation | Create segmented keys such as `ABCD-EFGH-IJKL-MNOP-1234`. | Sample codes and identifiers |
| Array helpers | Fill, print, and shuffle integer arrays. | Algorithm practice |
| Overloaded swaps | Swap several primitive types and dates. | Reusable data manipulation |
| Text transformation | Apply and reverse a simple shift transformation. | Educational string processing |
| Formatting helpers | Generate repeated tab characters. | Console layout |

> The included text transformation is a learning example, not a secure encryption algorithm. It must not be used to protect passwords or sensitive information.

## Example Usage

```cpp
#include "MyUtilityLib.h"

MyUtilityLib::Srand();

int value = MyUtilityLib::RandomNum(1, 10);
string key = MyUtilityLib::GenerateKey();
string encoded = MyUtilityLib::Encryption("Demo");
string original = MyUtilityLib::Decryption(encoded);
```

## Key Takeaways

A utility library reduces duplication by placing frequently reused operations behind clear method names. The project also demonstrates how enumerations can make a single character-generation function support several behaviors without requiring separate functions for every character category.

The overloaded swap methods show how the same conceptual operation can be adapted to different types. The array and random-generation examples provide a foundation for practicing algorithms, test-data generation, and console-based programming.

## How to Run

1. Open `Utility Library.sln` in Visual Studio on Windows.
2. Build the solution using the available C++ configuration.
3. Run the console application to view generated values and array operations.
4. Include `MyUtilityLib.h` and `clsDate.h` when reusing the helpers in another project.

## Final Notes

This repository is an educational utility-library project. It focuses on reusable programming techniques and demonstrations rather than production-grade cryptography or security tooling.
