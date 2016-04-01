#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

void displayMap(map<string, string> map_to_print)
{
	for (map<string, string>::iterator itr = map_to_print.begin(), end = map_to_print.end(); itr != end; itr++)
	{
		cout << itr->first << itr->first << " --> " << itr->second << endl;
	}
}

int main() {
	vector<int> vec(5);
	vec[0] = 1, vec[1] = 2, vec[2] = 3, vec[3] = 4, vec[4] = 5;
	vector<int>::reverse_iterator itr = vec.rbegin();

	for (; itr != vec.rend(); itr++) {
		cout << *itr << endl;
	}

	map<string, string> my_map;

	my_map["hi"] = "你好";
	my_map["yes"] = "是";
	my_map["no"] = "不是";
	displayMap(my_map);


	cout << "Done";
	cin.get();


}

