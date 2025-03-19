#include<iostream>
using namespace std;


int main() {

	char name[32];
	int age;

	cout << "이름은 ? ";
	cin.getline(name, 32);

	cout << "주소는 ? ";

	//cin.ignore(256, '\n');

	char address[256];
	cin.getline(address, 256);


	cout << "나이는 ? ";
	cin >> age;

	cout << name << ", " << address << ", " << age << "세";

	return 0;
}