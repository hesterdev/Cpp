#include<iostream>

struct LinkedListNode
{
	int data;
	LinkedListNode *next;
};

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	LinkedList &operator=(const LinkedList&other);
	
	void insert(int val);
private :
	LinkedListNode*_p_head;

	
};

LinkedList& LinkedList::operator=(const LinkedList&other) {
	//ȷ�����ǽ��Լ���ֵ���Լ�,��������������,�������
	if (this == &other) {
		//����this������ά�ָ�ֵ�������ƻ�
		return *this;
	}
	//�ڸ��ƹ����µ�ֵʱ,������Ҫ�ͷ�ԭ�����ڴ�,��Ϊ��û����
	delete _p_head;
	_p_head = NULL;
	LinkedListNode*p_itr = other._p_head;
	while (p_itr != NULL) {
		insert(p_itr->data);
	}
	return *this;
}
