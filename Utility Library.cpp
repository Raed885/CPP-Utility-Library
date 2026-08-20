#include <iostream>
#include "MyUtilityLib.h"
using namespace std;


int main()
{
    MyUtilityLib::Srand();

    cout << MyUtilityLib::RandomNum(1, 10) << endl;
    cout << MyUtilityLib::GetRandomCharacter(MyUtilityLib::Mix) << endl;
    cout << MyUtilityLib::GetRandomCharacter(MyUtilityLib::CapitalChar) << endl;
    cout << MyUtilityLib::GenerateWord(MyUtilityLib::SpecialChar,7) << endl;
    cout << MyUtilityLib::GenerateKey() << endl;
   MyUtilityLib::GenerateKeys(5);

    int Arr[5] = { 1,2,3,4,5 };

    MyUtilityLib::ArrayAfterShuffle(Arr,5);

    cout << "Array after shuffle: \n";
    for (int i = 0; i < 5; i++) {

        cout << Arr[i] << endl;
    }

    int Arr2[7];

    MyUtilityLib::FillArrayWithOrderedNumbers(Arr2,7);

    cout << "Array after fill: \n";
    for (int i = 0; i < 7; i++) {

        cout << Arr2[i] << endl;
    }

    int Arr3[5];

    MyUtilityLib::FillArrayWithRandomNums(Arr3,5,20,50);

    cout << "Array after fill: \n";
    for (int i = 0; i < 5; i++) {

        cout << Arr3[i] << endl;
    }


    int Arr4[3] = { 1,2,3 };
    MyUtilityLib::PrintRandomArray(Arr4,3);
  
  cout<<"\nText1 "<<  MyUtilityLib::Tabs(3)<<"Text2\n";

  string Text = "Hello from Iraq";

  cout << "Original Text: " << Text << endl;

  cout << "Decryption: " << MyUtilityLib::Decryption(Text) << endl;

  string DecryptedText = MyUtilityLib::Decryption(Text);


  cout << "Encryption: " << MyUtilityLib::Encryption(DecryptedText) << endl;

  int x = 10, y = 5;

  cout << x << "    " << y << endl;
  MyUtilityLib::Swap(x, y);
  cout << x << "    " << y << endl;



  



    return 0;
}

