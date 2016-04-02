/*
class Superclass {

};

class Subclass :public Superclass {
	int val;
};

int main() {
	Subclass sub;
	Superclass super = sub;
}
*/

class Superclass {
public :
	//注意由于我们声明了复制构造函数
	//因此需要提供自己的默认构造函数
	Superclass(){}
private:
	//我们不会定义这个方法,这是被禁止的操作
	Superclass(const Superclass&other);
};

class Subclass :public Superclass {
	int val;
};
#include<iostream>
using namespace std;
int main() {
	Subclass sub;
	//Superclass super;
	Superclass *super = &sub;

	//cout << (Subclass*)(super)->val;}