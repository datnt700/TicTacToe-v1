#include <iostream>
using namespace std;

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int n;
void Draw_board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player (X)  -  Player  (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << matrix[0][0] << "  |  " << matrix[0][1] << "  |  " << matrix[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << matrix[1][0] << "  |  " << matrix[1][1] << "  |  " << matrix[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << matrix[2][0] << "  |  " << matrix[2][1] << "  |  " << matrix[2][2] << endl;

	cout << "     |     |     " << endl << endl;
}
void Input()
{
	int a;
	cout <<"It's "<< player<<" turn."<< " Press your number: ";
	cin >> a;
	
	if (a == 1)
	{
		if (matrix[0][0] == '1'){
			matrix[0][0] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
		
	if (a == 2)
	{
		if (matrix[0][1] == '2') {
			matrix[0][1] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 3)
	{
		if (matrix[0][2] == '3') {
			matrix[0][2] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 4)
	{
		if (matrix[1][0] == '4') {
			matrix[1][0] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 5)
	{
		if (matrix[1][1] == '5') {
			matrix[1][1] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 6)
	{
		if (matrix[1][2] == '6') {
			matrix[1][2] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 7)
	{
		if (matrix[2][0] == '7') {
			matrix[2][0] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 8)
	{
		if (matrix[2][1] == '8') {
			matrix[2][1] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
	if (a == 9)
	{
		if (matrix[2][2] == '9') {
			matrix[2][2] = player;
		}
		else {
			cout << "Plaease try again!" << endl;
			Input();
		}
	}
}
char Win()
{
	//first player
	//row
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	//colunm
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	//diagonal
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	//second player
	//row
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	//colunm
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	//diagonal
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}

void Toggle_player()
{
	if (player == 'X')
	{
		player = 'O';
	}
	else
	{
		player = ' X';
	}
}

int main()
{
	n = 0;
	Draw_board();
	while (true)
	{
		n++;
		Input();
		Draw_board();
		
		if (Win() == 'X')
		{
			cout << "X Win!" << endl;
			break;
		}
		else if( Win() == 'O')
		{
			cout << "O Win!" << endl;
			break;

		}
		else if(Win() == '/' && n == 9)
		{
			cout << "It's a draw" << endl;
		}
		Toggle_player();
	}
	
	
	system("pause");
	return 0;
}

/*******************************************************************
				END OF PROJECT
********************************************************************/