#include<iostream>

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
            setlocale(0, "");

			Triangle triangle;
			int temp;
			cin >> temp >> triangle.Array[1] >> triangle.Array[2] >> triangle.Array[3];
			triangle.color = static_cast<Color>(temp);



/*
		������� �4
		������� ������ �� 20 ��������� ���� Point.
		������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
		�������� �� ����� ����������:
		- ����� � ���������� x �����������
		- ���� �����, ���������� ����� �������� ����������.
		������� �5
		������� ������ �� 100 ��������� ���� Triangle.
		������������������� ��� ���������� ���������� (����� ������� �� 1 �� 10).
		��� ������������� ���������, ��� ����������� � ������ ������� ������ ����� ������������.
		(����� ������ ������� ������ ���� ������ ������ ���� ����� ���� ������ ������).
		���������� ���������� ������ ������������� � ������� �� ����� ��������� ����������:
		- ������� �� ����� ��� ������������, �������� ������� ��������� ��������, ��������� � ����������.
		���� ���������� ������������� ���, ������� ��������������� ���������.
		- ���������� ������������� ������� �����

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