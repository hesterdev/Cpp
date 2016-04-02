#include<fstream>
#include<iostream>
#include<vector>

using namespace std;

int main() {
	fstream file("highscores.txt", ios::in | ios::out);
	if (!file.is_open()) {
		cout << "Could not open file!" << endl;
		return 0;
	}
	int new_high_score;
	cout << "Enter a new high score: ";
	cin >> new_high_score;

	//下面的while循环在文件中搜索知道发现一个比当前高分小的值,这时候我们就知道在这个值钱插入高分,为了确保知道正确的位置,我们记录下当前分数之前的位置,也就是pre_score_pos
	streampos pre_score_pos = file.tellg();
	int cur_score;
	while (file >> cur_score) {
		if (cur_score < new_high_score) {
			break;
		}
		pre_score_pos = file.tellg();
	}
	//如果失败,而又不是在文件的末尾,那就是读入有问题
	if (file.fail() && !file.eof()) {
		cout << "Bad score/read--exiting";
		return 0;
	}
	//如果不调用clear,在遇到EOF的时候就不能再向文件中写入数据
	file.clear();

	//回到上一次读取的前面一个位置,来进行读取,这样就可以读入所有比我们高分低的那些分数,然后把它们在文件中往后移一个位置
	file.seekg(pre_score_pos);

	//现在将读取的所有的分数,从之前读入的那个开始
	vector<int>scores;
	while (file >> cur_score) {
		scores.push_back(cur_score);
	}
	//我们准备在这个循环中读到文件的结尾,因为想要读入文件中的所有分数
	if (!file.eof()) {
		cout << "Bad score/read--exiting";
		return 0;
	}
	//由于遇到了EOF,需要再次清理一下文件,这样我们就可以进行写操作
	file.clear();

	//回到进行插入操作的位置
	file.seekp(pre_score_pos);
	//如果不是写入到文件的开始出,我们就需要一个新换行

	//当一个数字读进来时,程序会在第一个遇到的空格处停下来
	//这样的的话,在写之前所处的位置就是在前面那个数字的末尾,而不是第二行的开头
	if (pre_score_pos) {
		file << endl;
	}
	//写出最高分
	file << new_high_score << endl;
	//遍历剩下的分数,把它们都写到文件中
	for (vector<int>::iterator itr = scores.begin(); itr != scores.end(); ++itr) {
		file << *itr << endl;
	}

	cout << "Done" << endl;
	cin.ignore();
	cin.get();
}
