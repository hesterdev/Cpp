#include<fstream>
#include<iostream>

using namespace std;
int main() {
	ifstream file_reader("C:\\Users\\pc\\Desktop\\MIMA.txt");
	if (!file_reader.is_open()) {
		cout << "Could not open file!" << endl;
	}
	int number;
	//�������������Ƿ�ɹ���ȡ��һ������
	if (file_reader >> number) {
		cout << "The value is: " << number << endl;
	}

	//cout << number << endl;
	cout << "Done";
	cin.get();

}