#include <iostream>
#include "Header.h"// Функция в Header
#include "Point.h"
using namespace std;
using namespace my;
//const char * HELLO1 = "Hello world!";
//const char * HELLO2 = "Hello to you!";
//
//int sum(int a, int b)
//{
//	int temp = a + b;
//	return temp;
//}


//void myswap(int * a, int * b) // Меняет значения first и second
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}

int main()
{
	//cout << sum(5, 9) << endl;


	///*helloWorld(HELLO1);
	//helloWorld(HELLO2);*/

	//int first = 10;
	//int second = 12;
	//int * ptrfirst = &first;
	//int * ptrsecond = &second;

	//myswap(ptrfirst, ptrsecond);
	Point a{5.5 ,6.6};
	Point b{7.7 ,8.8};

	//Всё находится в point.h

	cout << getDistanceTo(a, b); // Растояние между точками
	a = getAntipodePoint(a);// Значения наоборот
	Quadrant quad = getQuadrant(a);// В какой из четвертей находится точка
	swap(&a, &b);// меняет местами значения
}