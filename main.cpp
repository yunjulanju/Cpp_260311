#include <iostream>
#include "StringUtil.h"

using namespace std;

int LengthWord(char* Word, int Size)
{
	for(int i=0; i< Size; i++)
	{
		if (Word[i] == '\0')
		{
			return i;
		}
	}
	return -1;
}


void ReplaceWord(char* Word, int Index, char ReplaceWord)
{
	Word[Index] = ReplaceWord;
}

/*int FindWordIndex(char* Word, char FindWord, int Leng)
{
	for (int i = 0; i < Leng; i++)
	{
		if (Word[i] == FindWord)
		{
			return i;
		}
	}

	return -1;
}*/

/*int main()
{

	//문자열 
	//char Words[7] = {'W', 'o', 'r', 'l','d','s', '\0'};
	char Words[7] = "Worlds";

	cout << "Words 의 길이 " << LengthWord(Words, 8) << endl;

	int LengWord = LengthWord(Words , 8);

	ReplaceWord(Words, 3, 'x');
	cout << "Words 특정 문자를 특정 문자로 바꾸기 ReplaceWord(Words, 3, 'x') : " << Words << endl;

	cout << "Words 단어 찾기 'w' " << FindWordsIndex(Words, 'w', LengWord) << endl;


	return 0;
}*/
