#include <iostream>
using namespace std;
class Person {
private:
    string _name;
protected:
    int _age;
public:
    Person() {
        this->_name = nullptr;
        this->_age = 0;
    }
    Person(string name, int age) {
        this->_name = name;
        this->_age = age;
    }
    virtual void Print() {
        cout << _name << '\t' << _age << '\t';
    }
};
class Worker : Person {
private:
    int _seniority, _salary;
public:
    Worker() {
        this->_seniority = 0;
        this->_salary = 0;
    }
    Worker(string name, int age, int seniority, int salary):Person(name, age) {
        this->_seniority = seniority;
        this->_salary = salary;
    }
    void Print() {
        Person::Print();
        cout << _seniority << '\t' << _salary << endl;
    }
    void GetStartWorkAge() {
        cout << _age - _seniority << endl;
    }
};
class Shape{
public:
    virtual double GetSquare() = 0;
    virtual double GetPerimeter() = 0;
    virtual void GetNameShape() = 0;
};
class Square : Shape {
private:
    double _side;
public:
    Square(double side) {
        this->_side = side;
    }
    double GetSquare() override{
        return _side * _side;
    }
    double GetPerimeter() override {
        return _side * 2 + _side * 2;
    }
    void GetNameShape() override {
        cout << "Square" << endl;
    }
};
class Rectangle : Shape {
private:
    double _length, _width;
public:
    Rectangle(double length, double width) {
        this->_length = length;
        this->_width = width;
    }
    double GetSquare() override {
        return _length * _width;
    }
    double GetPerimeter() override {
        return _length * 2 + _width * 2;
    }
    void GetNameShape() override {
        cout << "Rectangle" << endl;
    }
};
int main()
{
    Worker wor("Bob", 25, 7, 15000);
    wor.Print();
    wor.GetStartWorkAge();
    Square sq(6);
    cout << sq.GetSquare() << endl;;
    cout << sq.GetPerimeter() << endl;;
    sq.GetNameShape();
    Rectangle rec(5,6);
    cout << rec.GetSquare() << endl;;
    cout << rec.GetPerimeter() << endl;;
    rec.GetNameShape();
}