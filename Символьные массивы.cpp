#include <iostream>

using namespace std;

const int MAX_INPUT_SIZE = 256; // Максимальный разиер строки

int main()
{
	char buffer[MAX_INPUT_SIZE];
	cin.getline(buffer, MAX_INPUT_SIZE);


	//const char a[6] = { 'H','e','l' ,'l' ,'o','\0' }; //массив символов , \0 - окончание строки 
	//const char b[] = "Hello world"; //Символьная строка

	char * current = buffer;
	while (*current != '\0')
	{
		++current; // считает кол-во символов в строке
    }
	
	cout << current - buffer << endl;
}