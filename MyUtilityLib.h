#pragma once
#include <iostream>
 #include "clsDate.h"
#include <string>
#include <vector>
#include <ctime>      // Include ctime for the time() function.

using namespace std;

class MyUtilityLib {

public:

	static	void Srand() {
		srand((unsigned)time(NULL));

	}
	static	int RandomNum(int From, int To) {

		int Randnum = rand() % (To - From + 1) + From;

		return Randnum;
	}

	enum enCharType {

		SmallChar = 1,
		CapitalChar = 2,
		SpecialChar = 3,
		DigitChar = 4,
		Mix = 5
	};

	static	char GetRandomCharacter(enCharType CharType) {

		switch (CharType) {

		case enCharType::SmallChar: {

			return  (char)RandomNum(97, 122);
			break;
		}
		case enCharType::CapitalChar: {

			return  (char)RandomNum(65, 90);
			break;
		}
		case   enCharType::SpecialChar: {
			return   (char)RandomNum(33, 47);
			break;
		}
		case   enCharType::DigitChar: {
			return   (char)RandomNum(48, 57);
			break;

		case   enCharType::Mix: {

			int RandomType = RandomNum(1, 5);
			return GetRandomCharacter(static_cast<enCharType>(RandomType - 1));
			break;
		}
		}
									return '\0';
		}


	};

	static	string GenerateWord(enCharType CharType, short Length) {

		string Word;

		for (int i = 1; i <= Length; i++) {

			Word = Word + GetRandomCharacter(CharType);
		}
		return Word;
	}

	static	string GenerateKey() {

		string Key = "";

		Key = GenerateWord(enCharType::CapitalChar, 4) + "-";
		Key = Key + GenerateWord(enCharType::CapitalChar, 4) + "-";
		Key = Key + GenerateWord(enCharType::CapitalChar, 4) + "-";
		Key = Key + GenerateWord(enCharType::CapitalChar, 4) + "-";
		Key = Key + GenerateWord(enCharType::Mix, 4);

		return Key;
	}

	static	void GenerateKeys(short NumofKey) {

		for (int i = 1; i <= NumofKey; i++) {

			cout << "Key[" << i << "]:";
			cout << GenerateKey() << endl;
		}
	}

	static	void PrintKeys(string KeyArr[], short NumofKey) {

		cout << "\nArray elements:\n";

		for (int i = 0; i <= NumofKey; i++) {

			cout << "Array[" << i << "]: " << KeyArr[i] << endl;

		}
	}

	static	void FillArrayWithRandomNums(int arr[100], int arrLength,int From,int To) {

		for (int i = 0; i < arrLength; i++) {
			arr[i] = RandomNum(From, To);
		}
	}

	static	void PrintRandomArray(int arr[100], int arrLength) {
		cout << "Array Elements: ";

		for (int i = 0; i < arrLength; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	static	void FillArrayWithOrderedNumbers(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++) {
			arr[i] = i + 1;  // Fill with ordered numbers from 1 to arrLength
		}
	}

	static	void PrintArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	static	void Swap(int& A, int& B) {

		int Tempswap = A;

		A = B;
		B = Tempswap;

	}

	static  void Swap(bool& A, bool& B)
	{
		bool Temp;

		Temp = A;
		A = B;
		B = Temp;
	}

	static  void Swap(char& A, char& B)
	{
		char Temp;

		Temp = A;
		A = B;
		B = Temp;
	}

	static  void Swap(string& A, string& B)
	{
		string Temp;

		Temp = A;
		A = B;
		B = Temp;
	}

	static  void Swap(clsDate& A, clsDate& B)
	{
		clsDate::SwapDates(A, B);

	}

	static	void ArrayAfterShuffle(int arr[100], int arrLength) {

		for (int i = 0; i < arrLength; i++) {

			int Index1 = RandomNum(1, arrLength) - 1;
			int Index2 = RandomNum(1, arrLength) - 1;
			Swap(arr[Index1], arr[Index2]);
		}

	}

	static	 string Encryption(string Text) {
		for (char& c : Text) {
			c = c + 3; // Simple shift cipher (A → B, z → {)
		}
		return Text;
	}

	static	    string Decryption(string Text) {
		for (char& c : Text) {
			c = c - 3; // Revert shift
		}
		return Text;
	}

	static string Tabs(short NumberofTabs) {
		string t = "";
		for (int i = 0; i < NumberofTabs; i++) {
			t += "\t";
		}
		return t;
	}

};




