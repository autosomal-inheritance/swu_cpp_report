#ifndef Board_H
#define Board_H

#include<iostream>
#include<string.h>
using namespace std;


class Board {
private:
	Board() ;

public:

	static int size;
	static string text[100];
	static void add(string me);
	static void print();

};

#endif