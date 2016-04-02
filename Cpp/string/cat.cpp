#include<fstream>
#include<iostream>

using namespace std;
int main(int argc, char*argv[]) {
	//为了程序正确执行argc应该为2,参数有程序名和文件名
	if (argc != 2) {
		cout << "usage: " << argv[0] << " <filename>" << endl;
	}
	else {
		ifstream the_file(argv[1]);
		if (!the_file.is_open()) {
			cout << "Could not open file " << argv[1] << endl;
			return 1;
		}
		char x;
		while (the_file.get(x)) {
			cout << x;
		}
	}//the_file在这里被她的析构函数隐士的关闭了

	cout << "Done" << endl;
	cin.get();
}