#include<iostream>
#include"Extention.hpp"
using namespace std;



/*
������� �1
������� ��������� Point, ���������� ��� ���� x, y ���� float.
������� � ������������������� ���������� ���� Point.
������� ���������� ���� Point � ������������������� �� ������� � ����������.
������� �� ����� �������� x, y ��������������� ����������.
�������� ���������, ������� ����������� ����������� �� �������� ����� ����� ��������� �������.
���������� ����� � ������ ������������ ������ � ����������.
��� �������� ��������� ����� ������������ ��������� Point.
�������� ���������, ������� �� ���� �������� ������ - ������ ������� ������� ����� �������� �������.
���������� ����� ������������ ������ � ����������.
��� �������� ��������� ����� ������������ ��������� Point.
������������ ����� �������� ������� ����� ������� ��� ��������� Point.
������� ���������� ���������� ����� � �������.
*/
//struct Point
//{
//	float x;
//	float y;
//};
//
//int main()
//{
//	Point point;
//	cin >> point.x >> point.y;
//	cout << point.x << " " << point.y << endl;
//	unsigned short r;
//	cin >> r;
//	int gip = sqrt(point.x*point.x + point.y*point.y);
//	if(gip > r )
//	{
//		cout <<"�� �����������" << endl;
//	}
//	else
//	{
//		cout << "�����������" << endl;
//	}
//	
//
//
//	point.x = abs(point.x) + abs(point.y) / 2.F


		/*
		������� �2
		������� ��������� Circle, ���������� ���� ���� ���� int - ������ � ������ ���� ���� Point - ����� ����������.
		������� � ������������������� ���������� ���� Circle.
		������� ���������� ���� Circle � ������������������� �� ������� ���������� � ����������.
		������� �� ����� ������, ����������� � ��������������� ����������.
		���� ��� ���������� ���� Circle.
		�������� ���������, ������� ���������� ������������ �� ����������,
		��������� ������� �����������.
		*/
		//struct Point
		//{
		//	float x;
		//	float y;
		//};
		//		struct Circle
		//		{
		//			int r;
		//			Point point;
		//		};
		//		
		//		int main()
		//			
		//		{
		//			setlocale(0, "");
		//		/*	Circle circle = { 5 ,{6 ,6} };
		//			cin >> circle.r >> circle.point.x >> circle.point.y;
		//				cout << circle.r << " " << circle.point.x << " " << circle.point.y << endl;*/
		//				Circle circle1;
		//				cin >> circle1.r >> circle1.point.x >> circle1.point.y;
		//				Circle circle2;
		//				cin >> circle2.r >> circle2.point.x >> circle2.point.y;
		//				
		//				int A = sqrt((circle2.point.x*circle2.point.x - circle1.point.x*circle1.point.x) + (circle2.point.y*circle2.point.y - circle1.point.y*circle1.point.y));
		//				if (circle1.r + circle2.r < A)
		//				{
		//					cout << "�������������" << endl;
		//				}
		//				else
		//				{
		//					cout << "�����������" << endl;
		//				}
		/*
				������� �3
				������� ������������ (enum) Color, ��� �������� 7 ������ ������.
				������� ��������� Triangle, ���������� ���� ���� Color
				� ������ ��� �������� ���� ��������� ���� int (����� ������).
				������� � ������������������� ���������� ���� Triangle ����������� �������.
				������� �� ����� ������, ����������� � ��������������� ����������.
				�������� ���� Color ������� � ��������� ����. (������������ ����������� switch).
				���������� � ������� �� ����� �������� ���������������� ������������.
				int main()
				*/
//enum Color
//{
//	red,
//	orange,
//	yelow,
//	green,
//	whiteblue,
//	blue,
//	purple
//};
//struct Triangle
//{
//	Color color;
//	int Array[3];
//};



//int main()
//{
	//setlocale(0, "");

	//Triangle triangle;
	//int temp;
	//cin >> temp >> triangle.Array[1] >> triangle.Array[2] >> triangle.Array[3];
	//triangle.color = static_cast<Color>(temp);



	/*
			������� �4
			������� ������ �� 20 ��������� ���� Point.
			������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
			�������� �� ����� ����������:
			- ����� � ���������� x �����������
			- ���� �����, ���������� ����� �������� ����������.
			*/

		/*struct Point
        {
	       float x;
	       float y;
        };

		

        int main()
		{
			
			Point array[20];
			for (int i = 1; i <= 20; i++)
			{
				array[i].x = ext::GetRandomValue(0, 100 ,true);
				array[i].y = ext::GetRandomValue(0, 100 ,true);
				
			}
			
			Point min;
				min.x = array[1].x;
			min.y = array[1].y;

				for (int i = 2; i <= 20; i++)
				{
					if (array[i].x < min.x)
					{
						min.x = array[i].x;
						min.y = array[i].y;
					}
					

				}
				cout << min.x << min.y << endl;

				min.x = array[1].x;
				min.y = array[1].y;

				int min2 = 9999;
				for (int i = 2; i <= 20; i++)
				{
					if ((array[i].x - array[i].y > 0 and array[i].x - array[i].y > min2) or (array[i].y - array[i].x > 0 and array[i].y - array[i].x > min2))
					{
						min.x = array[i].x;
						min.y = array[i].y;
					}


				}
				cout << min.x << min.y << endl;*/



/*
			������� �5
			������� ������ �� 100 ��������� ���� Triangle.
			������������������� ��� ���������� ���������� (����� ������� �� 1 �� 10).
			��� ������������� ���������, ��� ����������� � ������ ������� ������ ����� ������������.
			(����� ������ ������� ������ ���� ������ ������ ���� ����� ���� ������ ������).
			���������� ���������� ������ ������������� � ������� �� ����� ��������� ����������:
			- ������� �� ����� ��� ������������, �������� ������� ��������� ��������, ��������� � ����������.
			���� ���������� ������������� ���, ������� ��������������� ���������.
			- ���������� ������������� ������� �����
			*/

			enum Color
{
	red,
	orange,
	yelow,
	green,
	whiteblue,
	blue,
	purple
};
struct Triangle
{
	Color color;
	int Array[3];
};

int main()
		{

			Triangle mas[100];
			int a;

			for (int i = 1; i <= 100; i++)
			{
				while ((mas[i].Array[1] >= mas[i].Array[2] + mas[i].Array[3]) or (mas[i].Array[2] >= mas[i].Array[1] + mas[i].Array[3]) or (mas[i].Array[3] >= mas[i].Array[2] + mas[i].Array[1]))
				{
				
				mas[i].Array[1] = ext::GetRandomValue(1, 10, true);
				mas[i].Array[2] = ext::GetRandomValue(1, 10, true);
				mas[i].Array[3] = ext::GetRandomValue(1, 10, true);
			    }
				a = ext::GetRandomValue(1, 7, true);
				switch (a)
				{
				case 1: mas[i].color = red; 
					break;
				case 2: mas[i].color = orange;
					break;
				case 3: mas[i].color = yelow;
					break;
				case 4: mas[i].color = green;
					break;
				case 5: mas[i].color = whiteblue;
					break;
				case 6: mas[i].color = blue;
					break;

				default:mas[i].color = purple;
					break;
				}

				



			}

			int P;
			cin >> P;
			bool s = 0;
			int i = 0;

			for (int  i = 1; i <= 100; i++);
			{
				if (P < (mas[i].Array[1] + mas[i].Array[2] + mas[i].Array[3]))
				{
					cout << mas[i].Array[1] << mas[i].Array[2] << mas[i].Array[3] << endl;
					s = 1;
				}
			}
			if (s == 0)
			{
				cout << "����� ���" << endl;
			}

			int ss[7] = { 0 ,0 ,0 ,0 ,0 ,0 ,0 };

			for (int i = 1; i < 100; i++)
			{


				switch (mas[i].color)
				{
				case red: ss[0] ++;
					break;
				case orange: ss[1] ++;
					break;
				case yelow: ss[2] ++;
					break;
				case green: ss[3] ++;
					break;
				case whiteblue: ss[4] ++;
					break;
				case blue: ss[5] ++;
					break;
				default: ss[6] ++;
					break;
				}

			}
			cout << "������� : " << ss[0] << " ��������� : " << ss[1] << " ����� : " << ss[2] << " ������ : " << ss[3]
				<< " ������� : " << ss[4] << " ����� : " << ss[5] << " ���������� : " << ss[6] << endl;


			/*
			������� �6
			�������� ���������, ������� ��������� ������������ �������� �������� ����.
			���� ������� � �������������� ���������.
			�������� ������				��������� ���������
			1 1 1992					���� ���������
			30 6 1992					���� ���������
			31 7 1992					���� ���������
			31 9 1994					���� �����������
			32 1 1992					���� �����������
			1 13 1992					���� �����������
			29 2 1993					���� �����������
			29 2 2004					���� ���������
			29 2 1900					���� �����������
			29 2 2000					���� ���������
			*/
}