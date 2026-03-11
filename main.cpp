#include <iostream>

using namespace std;

int LengthWord(char* Word)
{
	for(int i=0; i>=0; i++)
	{
		if (Word[i] == '\0')
		{
			return i;
		}
	}
}


void ReplaceWord(char* Word, int Index, char ReplaceWord)
{
	Word[Index] = ReplaceWord;
}

int FindWordIndex(char* Word, char FindWord, int Leng)
{
	for (int i = 0; i < Leng; i++)
	{
		if (Word[i] == FindWord)
		{
			return i;
		}
	}

	return -1;
}

int main()
{

	//문자열 
	char Words[7] = {'W', 'o', 'r', 'l','d','s', '\0'};

	cout << "Words 의 길이 " << LengthWord(Words) << endl;

	int LengWord = LengthWord(Words);

	ReplaceWord(Words, 3, 'x');
	cout << "Words 특정 문자를 특정 문자로 바꾸기 ReplaceWord(Words, 3, 'x') : " << Words << endl;

	cout << "Words 단어 찾기 'w' " << FindWordIndex(Words, 'w', LengWord) << endl;
	cout << "Words 단어 찾기 'W' " << FindWordIndex(Words, 'W', LengWord) << endl;


	return 0;
}