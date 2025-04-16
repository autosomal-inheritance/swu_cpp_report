#include <iostream>
#include<string>
using namespace std;


class Book {

    string title;
    int price;
    int pages;

public:

    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; this->price = price; this->pages = pages;
    }

    void show() {
        cout << title << ' ' << price << "�� " << pages << " ������" << endl;
    }

    string getTitle() { return title; }


    friend bool operator <(Book op1, string op2);
    friend bool operator ==(Book op1, string op2);
};



bool operator <(Book op1, string op2) {
    string obj = op1.getTitle();

    if (obj < op2) {

        return true;
    }
    else {
        return false;
    }

};

bool operator ==(Book op1, string op2) {
    string obj = op1.getTitle();

    if (obj == op2) {

        return true;
    }
    else {
        return false;
    }

};

int main() {


    Book a("û��", 20000, 300);
    string b;

    cout << "å �̸��� �Է��ϼ���>>";
    getline(cin, b);


    if (a < b) {
        cout << a.getTitle() << "�� " << b << "���� �տ� �ֱ���!" << endl;
    }
    else if (a == b) {
        cout << "�� å�� ������ ������!" << endl;
    }
    else {
        cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
    }

    return 0;
}