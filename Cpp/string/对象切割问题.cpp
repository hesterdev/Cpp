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
	//ע���������������˸��ƹ��캯��
	//�����Ҫ�ṩ�Լ���Ĭ�Ϲ��캯��
	Superclass(){}
private:
	//���ǲ��ᶨ���������,���Ǳ���ֹ�Ĳ���
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