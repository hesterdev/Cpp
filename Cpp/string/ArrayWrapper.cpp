template<typename T>class ArrayWrapper {
public:
	ArrayWrapper(int size);
private:
	T*_p_men;
};

//����������ⲿ���幹�캯��,��Ϊ��ʼ,��Ҫ�Ѻ�����־Ϊģ��
template<typename T>
ArrayWrapper::ArrayWrapper(int size) :_p_men(new T[size]) {

}