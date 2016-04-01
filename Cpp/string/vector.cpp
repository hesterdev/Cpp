#include<iostream>
#include<vector>
using namespace std;


//这个特性叫模板（故名为模板库） 在c#和java里叫泛型
vector<int> a_vector(10);

int main() {
	for (int i = 0; i < 100; i++) {
		a_vector.push_back(i);
		//a_vector[i] = 0;
		cout << a_vector.size() << endl;
	}

	cin.get();
}