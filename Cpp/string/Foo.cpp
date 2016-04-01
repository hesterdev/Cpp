#include<iostream>
using namespace std;

class Foo //Foo在计算机编程中是个常用的占位符
{
public:
	Foo() {
		cout << "Foo's constructor" << endl;
	}
	~Foo() {
		cout << "Foo's decontructor" << endl;
	}
};

class Bar :public Foo {
public:
	Bar() {
		cout << "Bar's constructor" << endl;
	}
	~Bar() {
		cout << "Bar's deconstructor" << endl;
	}
};

int main() {
	//一个可爱的小东西
	{
		Bar bar;
	}
	cin.get();
}