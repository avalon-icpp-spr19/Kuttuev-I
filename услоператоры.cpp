#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	//bool b = true;
	//bool isEven = 10 ; // Всё что не 0 - true, для переменных типа bool название с is
	//bool isOdd = (10 % 2 == 1); //== - сравнение
	//bool isNotSame = (5 != 6);//  != - сравнение наоборот или !(5 == 6)
	//bool first = (5 == 5) && (6 == 6) || (6 ==7);// & - И , || - или
	


	//int n = 5;
	//	cin >> n;

	//	bool isEven = (n % 2 == 0);


	//if (isEven)
	//{
	//	//int a = 5; int b = 6;//a и b - локальные переменные , видны только в {}
	//	cout << "is even" << endl;
	//	/*cout << a + b << endl;*/
	//}
	//else
	//{
	//	cout << "is odd" << endl;
	//}
	//


	//int year;
	//cout << "Введите год" << endl;
	//cin >> year;

	//bool isLeapYear = (year % 400 ==0) 
	//	|| (year % 4 == 0) && (year % 100 !=0);


	//if (isLeapYear)

	//{		
	//	cout << "Высокосный" << endl;		
	//}

	//else

	//{
	//	cout << "Не высокосный" << endl;
	//}







	/*{
		if (year % 100 == 0)
		{
			cout << year << "Не высокосный" << endl;
        }
		else
		{
			if (year % 4 == 0)
			{
			cout << "Высокосный" << endl;
		    }
			else
			{
				cout << year << "Не высокосный" << endl;
			}
		}
	}*/



	int n;
	cin >> n;

	switch (n)
	{
	case 1:
	case 2:
	case 5:
	case 10:

		cout << n << " монета" << endl;
		break;

	default:
		cout << n << " не монета" << endl;		
		break;
	}


	//if (n == 1 || n == 2 || n == 5 || n == 10)
	//{
	//	cout << n << "монета" << endl;
	//}
}
