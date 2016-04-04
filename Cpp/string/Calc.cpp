#include<vector>
/*
class Calc {
public:
	Calc();
	int multiply(int x, int y);
	int add(int x, int y);
};
Calc::Calc(){
}
int Calc::multiply(int x, int y) {
	return x*y;
}
int Calc::add(int x, int y) {
	return x + y;
}
*/
template<typename Type>
class Calc {
public:
	Calc();
	Type myltiply(Type x, Type y);
	Type add(Type x, Type y);
};

template <typename Type>
Calc<Type>::Calc() {

}
template<typename T>T Calc<T>::myltiply(T x, T y) {
	return x*y;
}
template<typename T>T Calc<T>::add(T x, T y) {
	return x + y;
}


int main() {
	Calc<int> c;
	std::vector<int> vec;
}