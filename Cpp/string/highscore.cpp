#include<fstream>
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
int main() {
	ifstream file_reader("highscores.txt");
	if (!file_reader.is_open()) {
		cout << "Could not open file!" << "\n";
	}
	vector<int> scores;
	for (int i = 0; i < 10; i++) {
		int score = 0;
		if (!(file_reader >> score)) {
			break;
		}
		scores.push_back(score);
	}
	display(scores);

	cout << "Done" << endl;
	cin.get();
}
void display(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}