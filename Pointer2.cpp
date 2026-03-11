#include <iostream>

using namespace std;

int main()
{
	//숫자 입력 받아서 그걸 크기로 숫자 배열 만들기
	// 1부터 크기까지 초기화 하고 출력하는 프로그램

	int Size = 0;
	cout << "숫자 배열 크기를 입력하시오 : ";
	cin >> Size;

	int* NumArray = new int[Size];
	if (!NumArray)
	{
		return -1;
	}
	cout << "new 후 NumArray : "<< NumArray << endl;

	for (int i = 0; i < Size; i++)
	{
		NumArray[i] = i + 1;
		cout << NumArray[i] << endl;
	}

	delete[] NumArray;
	//cout << "delete 후 NumArray : " << NumArray << endl;
	NumArray = nullptr;
	cout << "초기화 후 NumArray : " << NumArray << endl;

}