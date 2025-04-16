#include<iostream>
#include<string>
using namespace std;

#include"Board.h"


int Board::size = 0;


void Board::add(string me) {

	if (size > 99) {
		cout << "공간없음 \n";
	}
	else {
		text[size] = me;
		size++;
	}

}


void Board::print() {

	cout << "************* 게시판입니다. *************\n";

	for (int i = 0; i <= size; i++) {
		cout << i << ": " << text[i] << endl;
	}
}