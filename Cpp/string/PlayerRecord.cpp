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
	file.write(rec.name.c_str(), len + 1);//+1����Ϊ�յĽ�����
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
	//ִ��һ�����ǵļ����ȷ��û�з��������ڴ�
	if (str_len > 0 && str_len < 10000) {

		char *p_str_buf = new char[str_len + 1];
		if (!file.read(p_str_buf, str_len + 1)) {//+1����ΪnullΪ��ֹ��
			delete p_str_buf;
			cout << "Error reading from file" << endl;
			return 1;
		}
		//ȷ���ַ�����null��ֹ��
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