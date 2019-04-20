
#include "Header.h"
void helloWorld(const char * line) // функция ,(char * line) - Мы хотим вынести  line
{
	std::cout << line << std::endl; // В заголовочных фаилах нельзя писать using namespace std , std надо писать вручную
}