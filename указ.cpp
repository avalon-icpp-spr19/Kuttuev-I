#include <iostream>


using namespace std;


int main()
{

	int data[5] = { 2,4,6,8,10 };
	cout << data << endl;
	cout << *(data + 1) << endl;

	cout << endl;


	double ddata[5] = { 0.2,0.4,0.6,0.8,1.0 };
	cout << ddata << endl;
	cout << ddata + 1 << endl;


	int a = 10;
	int * ptr = &a;

	cout << *ptr << endl;
	cout << (ptr + 1) << endl;
	//int a = 10;
	//double b = 0.25;
	//cout << a << endl;

	//int * ptr = &a; // * - ������� ����� "a"
	//int * ptr2 = &b;

	//*ptr = *ptr * 2; //������ �������� a


	//cout << sizeof(ptr) << endl;// ������� ������

	//ptr = nullptr; 
	//cout << ptr;

	//int * ptr = new int[10]; // �������� ����� ������ ��� �������� 10 ���������
	//cout << ptr << endl;

	//ptr = new int[100]; // ���� ������� �������� ���-�� ���. ������
	//cout << ptr << endl;

	/*cout << *ptr << endl; */
}