#include "StringUtil.h"

int FindWordsIndex(char* Word, char FindWord, int Leng)
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
