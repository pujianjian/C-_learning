#include<iostream>
#include "duotai_virtual.cpp"

using namespace std;
int main() {
	cout << "��̬ʵ��" << endl;
	Animal *p1 = new Cat();
	p1->Speak();
	delete p1;
	system("pause");
	return 0;
}