#include<iostream>

struct LinkedListNode {
	int val;
	LinkedListNode *p_next;
};
class LinkedList {
public:
	LinkedList();//构造函数
	~LinkedList();
	void insert(int val);//插入一个节点
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