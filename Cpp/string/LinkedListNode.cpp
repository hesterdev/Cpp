#include<iostream>

struct LinkedListNode {
	int val;
	LinkedListNode *p_next;
};
class LinkedList {
public:
	LinkedList();//���캯��
	~LinkedList();
	void insert(int val);//����һ���ڵ�
private:
	LinkedListNode *_p_head;
};

LinkedList::~LinkedList() {
	LinkedListNode*p_itr = _p_head;
	while (p_itr != NULL) {
		LinkedListNode*p_tmp = p_itr->p_next;
		delete p_itr;
		p_itr = p_tmp;
	}
}