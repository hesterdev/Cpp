#include<iostream>
#include<vector>
using namespace std;


//������Խ�ģ�壨����Ϊģ��⣩ ��c#��java��з���
vector<int> a_vector(10);

int main() {
	for (int i = 0; i < 100; i++) {
		a_vector.push_back(i);
		//a_vector[i] = 0;
		cout << a_vector.size() << endl;
	}

	cin.get();
}