/*
class Node {
public:
	Node();
private :
	static int _getNextSerialNumber();
	static int _next_serial_number;
	int _serial_number;
};

//不是在类中声明,所以需要使用Node:: 作为前缀
static int Node::aaaserial_number = 0;

Node::Node():_serial_number(_getNextSerialNumber()){}

int Node::_getNextSerialNumber() {
	return _next_serial_number++;
}
*/

class Node {
public :
	static int serial_number;
};
//static int Node::serial_number = 0;