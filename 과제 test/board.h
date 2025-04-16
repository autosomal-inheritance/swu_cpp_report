#ifndef Board_H
#define Board_H

#include<string>


class Board {

	Board();
	static int size;
	static string text[100];

public:

	static void add(string me);
	static void print();

};

#endif