#include<fstream>
#include<iostream>

using namespace std;
int main() {
	ifstream file_reader("C:\\Users\\pc\\Desktop\\MIMA.txt");
	if (!file_reader.is_open()) {
		cout << "Could not open file!" << endl;
	}
	int number;
	//就是在这里检测是否成功读取了一个整数
	if (file_reader >> number) {
		cout << "The value is: " << number << endl;
	}

	//cout << number << endl;
	cout << "Done";
	cin.get();

}