#include<iostream>

using namespace std;


class Drawable {
public:
	virtual void draw() = 0;
	 ~Drawable();
};

Drawable::~Drawable() {
	cout << "DrawableÎö¹¹" << endl;
}
class MyDrawable :public Drawable {
public:
	virtual void draw();
	MyDrawable();
	 ~MyDrawable();

private:
	int *_my_data;
};

void MyDrawable::draw() {

}
MyDrawable::MyDrawable() {
	_my_data = new int;
}
MyDrawable::~MyDrawable() {
	cout << "MyDrawableÎö¹¹" << endl;

	delete _my_data;
}
void deleteDrawable(Drawable*drawable) {
	delete drawable;
}
int main() {
	deleteDrawable(new MyDrawable());

	

	cout << "Done";
	cin.get();
}