#include <iostream>
#include <string>
#include <limits>
#include "Extention.hpp" // ����� ������� ���� �������� � ""


using namespace std;
using namespace ext;

const int SIZE = 10;

int main()
{

	int mas[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		mas[i] = GetRandomValue(0, 10);
	}
}