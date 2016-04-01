#include<iostream>
#include<string>
using namespace std;

class FooSuperclass {
public:
	string val;
	FooSuperclass(const string &val);


};

FooSuperclass::FooSuperclass(const string &val) {
	this->val = val;
}

class Foo :public FooSuperclass {
public:
	Foo() :FooSuperclass("args") {

	}
};

int main() {
	Foo foo;
	cout << foo.val<<endl;

	cin.get();
}