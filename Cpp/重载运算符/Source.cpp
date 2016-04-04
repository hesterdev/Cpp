#include<iostream>

class A {
public:
	int val;
	A operator++(int);
	A operator++();
	A(int _val);
};

A::A(int _val) :val(_val) {}
A A::operator++(int) {
	return A(val++);
}
A A::operator++(){
	return A(++val);
}

using namespace std;
int main() {
	A a(32);
	a = ++a;
	cout << a.val << endl;
	cout << "Done" << endl;
	cin.get();
}