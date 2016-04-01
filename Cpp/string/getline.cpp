#include<iostream>
#include<string>
using namespace std;
int main() {
	string my_string;
	//getline(cin, my_string, '\n');//
	getline(cin, my_string, ',');

	cout<<my_string;

	cin.ignore();
	cin.get();
}