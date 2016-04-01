enum ChessPiece { EMPTY_SQUARE, WHITE_PAWN };
enum PlayerColor { PC_WHITE, PC_BLACK };
class ChessBoard {
public:
	ChessBoard();
	~ChessBoard();//析构函数
	ChessPiece getPiece(int x, int y);
	PlayerColor getMove();
	void makeMove(int from_x, int from_y, int to_x, int to_y);

private:
	ChessPiece _board[8][8];
	PlayerColor _whose_move;
	int _move_count;
};

ChessBoard::~ChessBoard() {

}


//术语叫 初始化列表
ChessBoard::ChessBoard() :_whose_move(PC_WHITE), _move_count(0)
{
	_whose_move = PC_WHITE;
	//先把整个棋盘清空,然后再填入棋子
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			_board[i][j] = EMPTY_SQUARE;
		}
	}
}

ChessPiece ChessBoard::getPiece(int x, int y) {
	return _board[x][y];
}
PlayerColor ChessBoard::getMove() {
	return _whose_move;
}

void ChessBoard::makeMove(int from_x, int from_y, int to_x, int to_y) {
	_board[to_x][to_y] = _board[from_x][from_y];
	_board[from_x][from_y] = EMPTY_SQUARE;
}