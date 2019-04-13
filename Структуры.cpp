#include<iostream>

using namespace std;

const int MAX_LENGT = 32;
const int MAX_EXAMS = 10;
//struct Date //Создание типа данных 
//{
//	int year;// содержание типа Date
//	int mounth;
//	int day;
//};

enum ExamenType // тоже вводит новый тип но его значения ограничены
{
	Russian,
Mathematica,
History,
Biology

};


struct Examen
{
	ExamenType type;
	int mark;
};


struct Student
{
	char lastname[MAX_LENGT];
	char firstname[MAX_LENGT];
	int document;
	Examen examen[MAX_EXAMS];
};

const char ExamsName[][MAX_LENGT] = { "Русский язык"," Математика" ,"Биология", "История" };
int main()
{
	setlocale(0, "");
	Student stu = { "Ivanov", "Andrey", 256985 ,{{ ExamenType::Russian, 85 },{ ExamenType::Mathematica , 98 }} };
	int temp = stu.examen[0].type;
	switch (temp)
	{
	case ExamenType :: Russian:
		cout << ExamsName[0];
	case ExamenType::Mathematica:
		cout << ExamsName[1];
	case ExamenType::History:
		cout << ExamsName[2];
	case ExamenType::Biology:
		cout << ExamsName[3];
	default:
		cout << "Неизвестный экзамен";
		break;
	}
	cout << ExamsName[temp] << endl;
	//cout << stu.examen.type << stu.examen.mark << endl; // Вывод stu


	//Examen ex1 = { "Русский язык " , 85 };
	//Examen ex2 = { "Математика" , 85 };
	//Date date;
	//cin >> date.year >> date.mounth >> date.day; //ввод переменных через пробел
 //   cout << date.year << " " << date.mounth << " " << date.day << endl;

	//Date dataArray[2] = { {12 ,9 ,2017}, {13,12, 2018} };// массив типа Date

}