#include <iostream>
#include <string>
using namespace std;


class Shape {

protected:
	string name; // 도형의 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이

public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() = 0; // 순수 가상함수
	string getName() { return name; } // 이름 리턴
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
	Oval vin("빈대떡", 20, 10);
	Rect chal("찰떡", 30, 40);
	Triangular tost("토스트", 30, 40);

	cout << vin.getName() << "의 넓이는 " << vin.getArea() << endl;
	cout << chal.getName() << "의 넓이는 " << chal.getArea() << endl;
	cout << tost.getName() << "의 넓이는 " << tost.getArea() << endl;

	return 0;
}