#include<iostream>
using namespace std;

class Foo //Foo�ڼ����������Ǹ����õ�ռλ��
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
	//һ���ɰ���С����
	{
		Bar bar;
	}
	cin.get();
}