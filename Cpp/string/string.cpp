#include<iostream>
#include<string>
using namespace std;

int main() {
	string user_name;

	cout << "Please enter your name: ";
	cin >> user_name;
	user_name += " Welcome";

	cout << "Hi " << user_name << "\n";


	cin.ignore();
	cin.get();
}