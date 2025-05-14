#include <iostream>
#include<string>
using namespace std;


class Circle {
    int radius;


public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; };

};

class NamedCircle : public Circle {
    string name;

public:
    NamedCircle(int radius, string name);
    string getName();

    string biggest(NamedCircle p[], int n);

    void set(int radius, string name);
};

NamedCircle::NamedCircle(int radius = 0, string name = "") {
    this->name = name;
    setRadius(radius);
}

string NamedCircle::getName() {
    return name;
}

string biggest(NamedCircle p[], int n) {
    double max_size=0;
    string max;
    for (int i = 0; i < n; i++) {
        if (max_size < p[i].getArea()) {
            max = p[i].getName();
            max_size = p[i].getArea();
        }
    }

    return max;
}

void NamedCircle::set(int radius, string name) {
    this->name = name;
    setRadius(radius);
}
int main() {

    NamedCircle pizza[5];

    cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���\n";

    int r;
    string n;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ">> ";
        cin >> r >> n;

        pizza[i].set(r, n);
    }

    cout << "���� ������ ū ���ڴ� " << biggest(pizza, 5) << "�Դϴ�.\n";

    return 0;
}