#include<iostream>
#include<map>
#include<string>

using namespace std;

map<string, string> name_to_email;

int main() {

	name_to_email["Alex Allain"] = "webmaster@cprogramming.com";
	name_to_email.erase("Alex Allain");
	cout << name_to_email["Alex Allain"];

	cout << "Done" << endl;
	cin.get();
}
