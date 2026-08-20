#pragma once

#include <cstdlib>
#include <ctime>
#include <string>

#include "clsDate.h"

class MyUtilityLib
{
public:
    enum enCharType
    {
        SmallChar = 1,
        CapitalChar = 2,
        SpecialChar = 3,
        DigitChar = 4,
        Mix = 5
    };

    static void Srand()
    {
        std::srand(static_cast<unsigned>(std::time(nullptr)));
    }

    static int RandomNum(int from, int to)
    {
        if (from > to)
            std::swap(from, to);

        return std::rand() % (to - from + 1) + from;
    }

    static char GetRandomCharacter(enCharType charType)
    {
        switch (charType)
        {
        case SmallChar:
            return static_cast<char>(RandomNum('a', 'z'));

        case CapitalChar:
            return static_cast<char>(RandomNum('A', 'Z'));

        case SpecialChar:
            return static_cast<char>(RandomNum('!', '/'));

        case DigitChar:
            return static_cast<char>(RandomNum('0', '9'));

        case Mix:
        {
            // Mix only selects from the four actual character categories.
            const auto randomType = static_cast<enCharType>(RandomNum(SmallChar, DigitChar));
            return GetRandomCharacter(randomType);
        }

        default:
            return '\0';
        }
    }

    static std::string GenerateWord(enCharType charType, short length)
    {
        std::string word;
        word.reserve(length);

        for (short i = 0; i < length; ++i)
            word += GetRandomCharacter(charType);

        return word;
    }

    static std::string GenerateKey()
    {
        return GenerateWord(CapitalChar, 4) + "-" +
               GenerateWord(CapitalChar, 4) + "-" +
               GenerateWord(CapitalChar, 4) + "-" +
               GenerateWord(CapitalChar, 4) + "-" +
               GenerateWord(Mix, 4);
    }

    static void GenerateKeys(short numberOfKeys)
    {
        for (short i = 1; i <= numberOfKeys; ++i)
            std::cout << "Key[" << i << "]: " << GenerateKey() << '\n';
    }

    static void PrintKeys(const std::string keyArray[], short numberOfKeys)
    {
        std::cout << "\nArray elements:\n";

        for (short i = 0; i < numberOfKeys; ++i)
            std::cout << "Array[" << i << "]: " << keyArray[i] << '\n';
    }

    static void FillArrayWithRandomNums(int arr[], int arrLength, int from, int to)
    {
        for (int i = 0; i < arrLength; ++i)
            arr[i] = RandomNum(from, to);
    }

    static void PrintRandomArray(const int arr[], int arrLength)
    {
        std::cout << "Array Elements: ";

        for (int i = 0; i < arrLength; ++i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';
    }

    static void FillArrayWithOrderedNumbers(int arr[], int arrLength)
    {
        for (int i = 0; i < arrLength; ++i)
            arr[i] = i + 1;
    }

    static void PrintArray(const int arr[], int arrLength)
    {
        for (int i = 0; i < arrLength; ++i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';
    }

    static void Swap(int& a, int& b)
    {
        const int temp = a;
        a = b;
        b = temp;
    }

    static void Swap(bool& a, bool& b)
    {
        const bool temp = a;
        a = b;
        b = temp;
    }

    static void Swap(char& a, char& b)
    {
        const char temp = a;
        a = b;
        b = temp;
    }

    static void Swap(std::string& a, std::string& b)
    {
        const std::string temp = a;
        a = b;
        b = temp;
    }

    static void Swap(clsDate& a, clsDate& b)
    {
        clsDate::SwapDates(a, b);
    }

    static void ArrayAfterShuffle(int arr[], int arrLength)
    {
        // Fisher-Yates shuffle: each position is swapped with a random
        // position from the unshuffled portion of the array.
        for (int i = arrLength - 1; i > 0; --i)
        {
            const int randomIndex = RandomNum(0, i);
            Swap(arr[i], arr[randomIndex]);
        }
    }

    // Educational Caesar-shift transformation. This is NOT secure encryption.
    static std::string Encryption(std::string text)
    {
        for (char& c : text)
            c = static_cast<char>(c + 3);

        return text;
    }

    static std::string Decryption(std::string text)
    {
        for (char& c : text)
            c = static_cast<char>(c - 3);

        return text;
    }

    static std::string Tabs(short numberOfTabs)
    {
        return std::string(numberOfTabs, '\t');
    }
};
