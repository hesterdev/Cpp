#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;
int main() {
	ofstream file_writer("highscores.txt");
	if (!file_writer.is_open()) {
		cout << "Could not open file!" << endl;
		return 0;
	}
	//由于没有任何真实的分数,接下来输出数字10~1
	for (int i = 0; i < 10; i++) {
		file_writer << 10 - i << endl;
	}

	cout << "Done" << endl;
	cin.get();
}