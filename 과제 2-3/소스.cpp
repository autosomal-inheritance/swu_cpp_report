#include<iostream>
using namespace std;


int main() {

	char name[32];
	int age;

	cout << "�̸��� ? ";
	cin.getline(name, 32);

	cout << "�ּҴ� ? ";

	//cin.ignore(256, '\n');

	char address[256];
	cin.getline(address, 256);


	cout << "���̴� ? ";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��";

	return 0;
}