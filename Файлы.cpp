#include<fstream> // ��� ������ � �������
#include<iostream>
#include <string>
#include <vector> // ������������ ������� , ���� �����������
using namespace std;

//const string DIR = "assets/"; // ����� ��� ������ ������������

const int MAX_SIZE = 100;
const string FILENAME = "data.txt";

struct Point
{
	int x;
	int y;
};
int main()
{
	setlocale(0, ""); //����� �� ������ ������
	ifstream fin;
	//string buffer;
	//getline(cin, buffer); // ����� ��� ������ ������������

	//string path = DIR + buffer; // ����� ��� ������ ������������

	//ofstream fout1;
	//ofstream fout2;//��� ������
	//fout1.open(path)

	//fout1.open("../../data.txt" , std::ofstream::app); //std::ofstream::app - ����� ���������� ��� �������� �������� � ������ std::ofstream ,// �� ������� ���� , ���� � ����� �������� � �������� ����� ���������
	//fout2.open("nodata.txt");




	//if (!fout1.is_open() || !fout2.is_open()) // ! - ���������
	//{
	//	cout << "�� ������ ������� ����" << endl;
	//	return 1;
	//}
	//fout1 << "Hello world!" << endl; // ������� ��������� � ����
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