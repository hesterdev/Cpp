#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;
int main() {
	//���ʼ������һ��
	srand(time(NULL));
	cout << rand() << endl;		//0-RAND_MAX֮ǰ����ֵ�� RAND_MAX����32767

	cin.get();
}