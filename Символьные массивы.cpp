#include <iostream>

using namespace std;

const int MAX_INPUT_SIZE = 256; // ������������ ������ ������

int main()
{
	char buffer[MAX_INPUT_SIZE];
	cin.getline(buffer, MAX_INPUT_SIZE);


	//const char a[6] = { 'H','e','l' ,'l' ,'o','\0' }; //������ �������� , \0 - ��������� ������ 
	//const char b[] = "Hello world"; //���������� ������

	char * current = buffer;
	while (*current != '\0')
	{
		++current; // ������� ���-�� �������� � ������
    }
	
	cout << current - buffer << endl;
}