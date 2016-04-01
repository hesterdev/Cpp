#include<iostream>
using namespace std;

class Hi {
public:
	int a;
	int b;

public:
	/*Hi();
	Hi(Hi&other);*/
};
//Hi::Hi() {
//
//}
//Hi::Hi(Hi&other) {
//	this->a = 10;
//	this->b = 20;
//}


void display(Hi &h);

int main() {
	Hi h1;
	h1.a = 3; h1.b = 5;


	//这样的赋值,会去调用 复制构造函数
	Hi h2 = h1;


	display(h1);
	display(h2);
	cout << "Done";
	cin.get();
}

void display(Hi &h) {
	cout << h.a <<","<< h.b << endl;
}