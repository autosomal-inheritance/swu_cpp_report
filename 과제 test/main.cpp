#include<iostream>
#include<string>
using namespace std;

#include "Board.h"



int main() {
	// Board myBoard; // ��ü ������ ������ �����Դϴ�.

	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();

	return 0;
}