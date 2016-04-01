#include<iostream>
#include<string>

using namespace std;

int main() {
	string user_first_name;
	string user_last_name;

	cout << "please enter your first naem: ";
	cin >> user_first_name;
	cout << "please enter your last name: ";
	cin >> user_last_name;

	string user_full_name = user_first_name + " " + user_last_name;

	cout << "your name is: " << user_full_name << "\n";


	cin.ignore();
	cin.get();

}