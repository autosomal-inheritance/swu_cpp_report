#include<iostream>
#include<string.h>
using namespace std;

#include "board.h"


int main() {
	// Board myBoard; // ��ü ������ ������ �����Դϴ�.

	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();

	return 0;
}