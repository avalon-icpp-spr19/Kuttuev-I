#include <iostream>
#include "Extention.hpp"


using namespace std;
using namespace ext;

struct Date
{
	int day;
	int mounth;
};

void RND_Date(Date mas[23])
{
	for (int i = 0; i < 23; i++)
	{
		mas[i].mounth = GetRandomValue(1, 12, true);

		switch (mas[i].mounth)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: mas[i].day = GetRandomValue(1, 31, true); break;
		case 4:
		case 6:
		case 9:
		case 11: mas[i].day = GetRandomValue(1, 30, true); break;
		case 2:
			int a;
			a = GetRandomValue(1, 2019);
			bool LeapYear = (a % 400 == 0) || (a % 100 != 0) && (a % 4 == 0);
			if (LeapYear)
			{
				mas[i].day = GetRandomValue(1, 29, true);
			}
			else
			{
				mas[i].day = GetRandomValue(1, 28, true);
			}
			break;
		}
	}
}



int Srav(Date mas[23])
{

	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			if (i == j)
			{
				j++;
			}
			if (mas[i].day == mas[j].day && mas[i].mounth == mas[j].mounth)
			{
				return 1;
			}

		}
	}
	return 0;
}
int main()
{
	setlocale(0, "");

	int N;
	int scet = 0;


	{
		cin >> N;
	}
	while (1 <= N <= 100000)


		for (int i = 0; i < N; i++)
		{

			Date mas[23];
			RND_Date(mas);
			scet = scet + Srav(mas);

		}

	cout << scet << endl;
}