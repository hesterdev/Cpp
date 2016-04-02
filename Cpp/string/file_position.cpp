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

	//�����whileѭ�����ļ�������֪������һ���ȵ�ǰ�߷�С��ֵ,��ʱ�����Ǿ�֪�������ֵǮ����߷�,Ϊ��ȷ��֪����ȷ��λ��,���Ǽ�¼�µ�ǰ����֮ǰ��λ��,Ҳ����pre_score_pos
	streampos pre_score_pos = file.tellg();
	int cur_score;
	while (file >> cur_score) {
		if (cur_score < new_high_score) {
			break;
		}
		pre_score_pos = file.tellg();
	}
	//���ʧ��,���ֲ������ļ���ĩβ,�Ǿ��Ƕ���������
	if (file.fail() && !file.eof()) {
		cout << "Bad score/read--exiting";
		return 0;
	}
	//���������clear,������EOF��ʱ��Ͳ��������ļ���д������
	file.clear();

	//�ص���һ�ζ�ȡ��ǰ��һ��λ��,�����ж�ȡ,�����Ϳ��Զ������б����Ǹ߷ֵ͵���Щ����,Ȼ����������ļ���������һ��λ��
	file.seekg(pre_score_pos);

	//���ڽ���ȡ�����еķ���,��֮ǰ������Ǹ���ʼ
	vector<int>scores;
	while (file >> cur_score) {
		scores.push_back(cur_score);
	}
	//����׼�������ѭ���ж����ļ��Ľ�β,��Ϊ��Ҫ�����ļ��е����з���
	if (!file.eof()) {
		cout << "Bad score/read--exiting";
		return 0;
	}
	//����������EOF,��Ҫ�ٴ�����һ���ļ�,�������ǾͿ��Խ���д����
	file.clear();

	//�ص����в��������λ��
	file.seekp(pre_score_pos);
	//�������д�뵽�ļ��Ŀ�ʼ��,���Ǿ���Ҫһ���»���

	//��һ�����ֶ�����ʱ,������ڵ�һ�������Ŀո�ͣ����
	//�����ĵĻ�,��д֮ǰ������λ�þ�����ǰ���Ǹ����ֵ�ĩβ,�����ǵڶ��еĿ�ͷ
	if (pre_score_pos) {
		file << endl;
	}
	//д����߷�
	file << new_high_score << endl;
	//����ʣ�µķ���,�����Ƕ�д���ļ���
	for (vector<int>::iterator itr = scores.begin(); itr != scores.end(); ++itr) {
		file << *itr << endl;
	}

	cout << "Done" << endl;
	cin.ignore();
	cin.get();
}
