#include <iostream>

#include "MyUtilityLib.h"

int main()
{
    MyUtilityLib::Srand();

    std::cout << MyUtilityLib::RandomNum(1, 10) << '\n';
    std::cout << MyUtilityLib::GetRandomCharacter(MyUtilityLib::Mix) << '\n';
    std::cout << MyUtilityLib::GetRandomCharacter(MyUtilityLib::CapitalChar) << '\n';
    std::cout << MyUtilityLib::GenerateWord(MyUtilityLib::SpecialChar, 7) << '\n';
    std::cout << MyUtilityLib::GenerateKey() << '\n';

    MyUtilityLib::GenerateKeys(5);

    int array[5] = {1, 2, 3, 4, 5};
    MyUtilityLib::ArrayAfterShuffle(array, 5);
    MyUtilityLib::PrintArray(array, 5);

    int orderedArray[7];
    MyUtilityLib::FillArrayWithOrderedNumbers(orderedArray, 7);
    MyUtilityLib::PrintArray(orderedArray, 7);

    int randomArray[5];
    MyUtilityLib::FillArrayWithRandomNums(randomArray, 5, 20, 50);
    MyUtilityLib::PrintRandomArray(randomArray, 5);

    std::cout << "\nText1" << MyUtilityLib::Tabs(3) << "Text2\n";

    std::string text = "Hello from Iraq";
    const std::string encryptedText = MyUtilityLib::Encryption(text);
    const std::string decryptedText = MyUtilityLib::Decryption(encryptedText);

    std::cout << "Original:  " << text << '\n';
    std::cout << "Encrypted: " << encryptedText << '\n';
    std::cout << "Decrypted: " << decryptedText << '\n';

    int x = 10;
    int y = 5;

    MyUtilityLib::Swap(x, y);
    std::cout << "Swapped values: " << x << ", " << y << '\n';

    return 0;
}
