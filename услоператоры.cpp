#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	//bool b = true;
	//bool isEven = 10 ; // �� ��� �� 0 - true, ��� ���������� ���� bool �������� � is
	//bool isOdd = (10 % 2 == 1); //== - ���������
	//bool isNotSame = (5 != 6);//  != - ��������� �������� ��� !(5 == 6)
	//bool first = (5 == 5) && (6 == 6) || (6 ==7);// & - � , || - ���
	


	//int n = 5;
	//	cin >> n;

	//	bool isEven = (n % 2 == 0);


	//if (isEven)
	//{
	//	//int a = 5; int b = 6;//a � b - ��������� ���������� , ����� ������ � {}
	//	cout << "is even" << endl;
	//	/*cout << a + b << endl;*/
	//}
	//else
	//{
	//	cout << "is odd" << endl;
	//}
	//


	//int year;
	//cout << "������� ���" << endl;
	//cin >> year;

	//bool isLeapYear = (year % 400 ==0) 
	//	|| (year % 4 == 0) && (year % 100 !=0);


	//if (isLeapYear)

	//{		
	//	cout << "����������" << endl;		
	//}

	//else

	//{
	//	cout << "�� ����������" << endl;
	//}







	/*{
		if (year % 100 == 0)
		{
			cout << year << "�� ����������" << endl;
        }
		else
		{
			if (year % 4 == 0)
			{
			cout << "����������" << endl;
		    }
			else
			{
				cout << year << "�� ����������" << endl;
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

		cout << n << " ������" << endl;
		break;

	default:
		cout << n << " �� ������" << endl;		
		break;
	}


	//if (n == 1 || n == 2 || n == 5 || n == 10)
	//{
	//	cout << n << "������" << endl;
	//}
}
