#include <iostream>

using namespace std;

int main()
{

	/*int value = 10;
	cout << value << endl;
	cout << ++value << endl;*/




	//int number;
	//int count = 0;
	//int sum = 0;

	//cin >> number;

	//while (true)
	//{
	//	cin >> number;
	//	if (number == 0) break;
	//	sum += number;
	//	++count;
	//}
	//cout << sum / static_cast<float>(count) << endl



	int sum = 0;

	for (int i = 1;  i <= 100; i+=2) // for (инициадизация ; условие ; выражение)
	{
		if (i % 10 == 0) continue; // continue - не выполнять следующую строчку
		cout <<i << endl;
		
	}

	

}