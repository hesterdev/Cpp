#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;
int main() {
	//在最开始处调用一次
	srand(time(NULL));
	cout << rand() << endl;		//0-RAND_MAX之前的数值， RAND_MAX至少32767

	cin.get();
}