#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout.setf(ios_base::left);
	cout.fill('-');
	cout << setfill('-') << setw(10) << "one" << "two" << "three" << endl;
	cout << setw(10) << "one" << "two" << "three" << endl;
}
