/*
这里主要用来写动态多态，即虚函数和纯虚函数
*/

#include<iostream>
using namespace std;

class Animal {
public:
	int age;
	Animal() {
		age = 5;
	}
	virtual void Speak() {
		cout << "动物年级："<< age << endl;
	}
};

class Cat : public Animal {
	void Speak() {
		cout << "猫的年级：" << age << endl;
	}
};
/*
void test01() {
	Animal *p1 = new Cat();
	p1->Speak();
	delete p1;
}
*/