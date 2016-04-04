#include<iostream>
#include<cstdlib>

using namespace std;
int main(int argc, char*argv[]) {

	int arr[10];
	if (argc < 2) {
		cout << "usage: " << argv[0] << " <number>" << endl;
	}
	else {
		int val = atoi(argv[1]);
		cout << val*val << endl;
	}

	cout << "Done" << endl;
	cin.get();
	return 0;
}