#include<iostream>
#include<iomanip>
#include<stdexcept>


using namespace std;
int main() {

	try {
		int i = 0;
		i = i / 0;
		cout << dec << setiosflags(ios_base::showbase) << setbase(2) << 32 << endl;
	}
	catch ( FileNotFoundException) {
		cout << e.what() << endl;
	}


}