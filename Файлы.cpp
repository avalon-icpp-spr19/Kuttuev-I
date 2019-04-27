#include<fstream> // Для работы с файлами
#include<iostream>
#include <string>
#include <vector> // динамические массивы , сами расширяются
using namespace std;

//const string DIR = "assets/"; // чтобы имя вводил пользователь

const int MAX_SIZE = 100;
const string FILENAME = "data.txt";

struct Point
{
	int x;
	int y;
};
int main()
{
	setlocale(0, ""); //Чтобы по русски писать
	ifstream fin;
	//string buffer;
	//getline(cin, buffer); // чтобы имя вводил пользователь

	//string path = DIR + buffer; // чтобы имя вводил пользователь

	//ofstream fout1;
	//ofstream fout2;//для записи
	//fout1.open(path)

	//fout1.open("../../data.txt" , std::ofstream::app); //std::ofstream::app - чтобы посмотреть что означает написать в поиске std::ofstream ,// на уровень выше , путь к фаилу начинать с корневой папки программы
	//fout2.open("nodata.txt");




	//if (!fout1.is_open() || !fout2.is_open()) // ! - отрицание
	//{
	//	cout << "Не смогли открыть файл" << endl;
	//	return 1;
	//}
	//fout1 << "Hello world!" << endl; // запишет сообщение в файл
	//fout2 << "And hello to you!" << endl;

	fin.open(FILENAME);

	vector<Point> data{};

	while (!fin.eof())
	{
		Point point;
		fin >> point.x >> point.y;
		data.push_back(point);
	}
}