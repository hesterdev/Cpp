class Player {
public:
	Player();
	~Player();

private:
	// 通过声明却不定义的方式, 这样编译器就不会为我们自动实现了
	Player(const Player& other);
	Player& operator=(const Player& other);


};

