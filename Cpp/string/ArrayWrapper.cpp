template<typename T>class ArrayWrapper {
public:
	ArrayWrapper(int size);
private:
	T*_p_men;
};

//现在在类的外部定义构造函数,作为开始,需要把函数标志为模板
template<typename T>
ArrayWrapper::ArrayWrapper(int size) :_p_men(new T[size]) {

}