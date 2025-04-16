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
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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


    Book a("청춘", 20000, 300);
    string b;

    cout << "책 이름을 입력하세요>>";
    getline(cin, b);


    if (a < b) {
        cout << a.getTitle() << "이 " << b << "보다 앞에 있구나!" << endl;
    }
    else if (a == b) {
        cout << "두 책의 제목이 같구나!" << endl;
    }
    else {
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
    }

    return 0;
}