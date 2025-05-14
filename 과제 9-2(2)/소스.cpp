#include <iostream>
#include <string>
using namespace std;


class Shape {

protected:
	string name; // ������ �̸�
	int width, height; // ������ �����ϴ� �簢���� �ʺ�� ����

public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() = 0; // ���� �����Լ�
	string getName() { return name; } // �̸� ����
};

class Oval :public Shape {
public:
	Oval(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {};
	virtual double getArea() { return width * height * 3.14; };
};

class Rect :public Shape {
public:
	Rect(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {};
	virtual double getArea() { return width * height; };
};

class Triangular :public Shape {
public:
	Triangular(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {};
	virtual double getArea() { return width * height * 0.5; };

};


int main() {
	Oval vin("��붱", 20, 10);
	Rect chal("����", 30, 40);
	Triangular tost("�佺Ʈ", 30, 40);

	cout << vin.getName() << "�� ���̴� " << vin.getArea() << endl;
	cout << chal.getName() << "�� ���̴� " << chal.getArea() << endl;
	cout << tost.getName() << "�� ���̴� " << tost.getArea() << endl;

	return 0;
}