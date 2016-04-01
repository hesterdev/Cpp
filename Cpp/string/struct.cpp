enum ChessPiece { EMPTY_SQUARE, WHITE_PAWN };
enum PlayerColor{PC_WHITE,PC_BLACK};
struct ChessBoard {
	ChessPiece board[8][8];
	PlayerColor whose_move;

	//在结构体中声明方法
	ChessPiece getPiece(int x, int y);
	PlayerColor getMove();
	void makeMove(int from_x, int from_y, int to_x, int to_y);
};


ChessPiece ChessBoard::getPiece(int x, int y) {
	return board[x][y];
}
PlayerColor ChessBoard::getMove() {
	return whose_move;
}
void ChessBoard::makeMove(int from_x, int from_y, int to_x, int to_y)
{
	board[to_x][to_y] = board[from_x][from_y];
	board[from_x][from_y] = EMPTY_SQUARE;
}