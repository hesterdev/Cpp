#include<iostream>
#include<fstream>

using namespace std;
int main() {
	ofstream wb("test.txt",ios::binary);
	if (!wb.is_open()) {
		cout << "�ļ�������" << endl;
	}
	else {
		int n = 255;
		wb.write(reinterpret_cast<char*>(&n), sizeof(n));
	}
	wb.close();
	cout << "Done" << endl;
	cin.get();
}