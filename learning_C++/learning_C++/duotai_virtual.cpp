/*
������Ҫ����д��̬��̬�����麯���ʹ��麯��
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
		cout << "�����꼶��"<< age << endl;
	}
};

class Cat : public Animal {
	void Speak() {
		cout << "è���꼶��" << age << endl;
	}
};
/*
void test01() {
	Animal *p1 = new Cat();
	p1->Speak();
	delete p1;
}
*/