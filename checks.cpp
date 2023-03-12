#pragma once

#include <iostream>
#include <string>
using namespace std;


bool check(string str, int len, int k, int i)
{
	//	if (k + i > len) return false;

	//	else 
	for (int j = 0; j < k; j++)
	{
		if (str[i] != str[j]) return false;
		i++;
	}

	for (int j = 0; j < k; j++)
		cout << str[j]; //выводим найденный повтор
	cout << " - repeat" << endl;
	// for (int j = 0; j < len; j++) cout << str[j]; //выводим строку
	return true;
}


bool isKperiodic(string str, int len, int k)
{
	for (int i = 0; i < len; i += k)
	{

		if (!check(str, len, k, i)) return false;
	}
	return true;
}