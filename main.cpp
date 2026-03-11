#include <iostream>

using namespace std;


string ReplaceWord(string Word, int Index, char ReplaceWord)
{
	Word[Index] = ReplaceWord;

	return Word;
}

int FindWordIndex(string word, char FindWord)
{
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == FindWord)
		{
			return i;
		}
	}

	return -1;
}

int main()
{

	//문자열 
	string Words = "Worlds";

	cout << "words의 길이 " << Words.length() << endl;
	cout << "words 특정 문자를 특정 문자로 바꾸기 " << ReplaceWord(Words, 3, 'x') << endl;
	cout << "words 단어 찾기 " << FindWordIndex(Words, 'l') << endl;


	return 0;
}