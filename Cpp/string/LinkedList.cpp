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
	//确保不是将自己赋值给自己,如果出现这种情况,则忽略它
	if (this == &other) {
		//返回this对象来维持赋值链不被破坏
		return *this;
	}
	//在复制过来新的值时,我们需要释放原来的内存,因为它没用了
	delete _p_head;
	_p_head = NULL;
	LinkedListNode*p_itr = other._p_head;
	while (p_itr != NULL) {
		insert(p_itr->data);
	}
	return *this;
}
