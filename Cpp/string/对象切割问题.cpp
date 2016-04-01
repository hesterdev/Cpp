class Superclass {

};

class Subclass :public Superclass {
	int val;
};

int main() {
	Subclass sub;
	Superclass super = sub;
}