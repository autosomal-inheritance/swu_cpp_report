#include<iostream>
using namespace std;

#include "Dept.h"


Dept::Dept(const Dept& dept) {
	this -> size = dept.size;
	this -> scores = new int[size];


	for (int i = 0; i < size; i++) {
		this->scores[i] = dept.scores[i];
	}
}

Dept :: ~Dept() {
}

void Dept::read() {
	cout << size << "���� ������ �Է����ּ��� : ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}


bool Dept::isOver60(int index) {
	if (scores[index] > 60) {
		return true;
	}
	else {
		return false;
	}
}

/*
class Dept {
	int size; // scores �迭�� ũ��
	int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ�

public:
	Dept(int size) { // ������
		this->size = size;
		scores = new int[size];
	}

	Dept(const Dept& dept); // ���������

	~Dept(); // �Ҹ���

	int getSize() { return size; }
	void read(); // size ��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� true ����
};
*/