#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
using namespace std;

struct Person {
	Person(const string&firstname, const string &lastname) :_firstname(firstname), _lastname(lastname) {
	}
	string _firstname;
	string _lastname;
};
int main() {
	vector<Person>people;
	people.push_back(Person("Joe", "Smith"));
	people.push_back(Person("Tonya", "malligans"));
	people.push_back(Person("Jerome", "noboggins"));
	people.push_back(Person("Mary", "Suzie-Purple"));

	int firstname_max_width = 0;
	int lastname_max_width(0);

	//获取最大宽度
	for (Person peo : people) {
		if (peo._firstname.length() > firstname_max_width)
			firstname_max_width = peo._firstname.length();
		if (peo._lastname.length() > firstname_max_width)
			lastname_max_width = peo._lastname.length();
	}
	//输出vector中的元素
	for (Person peo : people) {
		cout << setw(firstname_max_width) << left << peo._firstname;
		cout << " ";
		cout << setw(lastname_max_width) << left << peo._lastname;
		cout << endl;
	}
}