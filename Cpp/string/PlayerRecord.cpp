#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct PlayerRecord {
	int age;
	int score;
	string name;
};

int main() {
	PlayerRecord rec;
	rec.age = 11;
	rec.score = 200;
	rec.name = "John";

	fstream file("test.txt", ios::binary | ios::in | ios::out | ios::trunc);
	//wb.write(reinterpret_cast<char*>(&rec), sizeof(rec));
	file.write(reinterpret_cast<char*>(&rec.age), sizeof rec.age);
	file.write(reinterpret_cast<char*>(&rec.score), sizeof rec.score);

	int len = rec.name.length();
	file.write(reinterpret_cast<char*>(&len), sizeof(len));
	file.write(rec.name.c_str(), len + 1);//+1是因为空的结束符
	file.flush();
	//file.clear();
	//file.close();



	PlayerRecord in_rec;

	file.seekg(0, ios::beg);
	if (!file.read(reinterpret_cast<char*>(&in_rec.age), sizeof in_rec.age)) {
		cout << "Error reading from file" << endl;
	}
	if (!file.read(reinterpret_cast<char*>(&in_rec.score), sizeof in_rec.score)) {
		cout << "Error reading from file" << endl;
	}
	int str_len;
	if (!file.read(reinterpret_cast<char*>(&str_len), sizeof str_len)) {
		cout << "Error reading from file" << endl;
	}
	//执行一次明智的检查来确保没有分配过多的内存
	if (str_len > 0 && str_len < 10000) {

		char *p_str_buf = new char[str_len + 1];
		if (!file.read(p_str_buf, str_len + 1)) {//+1是因为null为终止符
			delete p_str_buf;
			cout << "Error reading from file" << endl;
			return 1;
		}
		//确认字符串是null终止的
		if (p_str_buf[str_len] == 0) {
			in_rec.name = string(p_str_buf);
		}

		int a(10);

		delete p_str_buf;
	}
	file.close();
	cout << in_rec.age << " " << in_rec.score << " " << in_rec.name << endl;
	cout << "Done" << endl;
	cin.get();

}