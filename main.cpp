#include <iostream>
#include <string>
using namespace std;
#include "checks.h"


int main()
{
	int k = 3; // ищем повторяемость в k символов
	string str1 = "123123123"; //тестовая строка (можно менять значение )
	string str2 = "QwertyQwerty";
	string str3 = "AbcAbcAbcabc";
	int len1 = str1.length();
	int len2 = str2.length();
	int len3 = str3.length();



	cout << "1 = " << len1 << ", 2 = " << len2 << ", 3 = " << len2 << " <- all tests are here" << endl; // длина всех строк (просто для инфо)

	if (isKperiodic(str1, len1, k)) cout << "==> 1 is periodic \n" << endl; else cout << "==> 1 is not periodic \n" << endl; // результат проверки строки на повторяемость с частотой k
	if (isKperiodic(str2, len2, k)) cout << "==> 2 is periodic \n" << endl; else cout << "==> 2 is not periodic \n" << endl;
	if (isKperiodic(str3, len3, k)) cout << "==> 3 is periodic \n" << endl; else cout << "==> 3 is not periodic \n" << endl;

	return 0;
}