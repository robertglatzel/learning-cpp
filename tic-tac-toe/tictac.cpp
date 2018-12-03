// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void display(char board[3][3]);
void player1_turn (char board[3][3]);
void player2_turn (char board[3][3]);
int main()
{
    char board[3][3] = { {'_', '_', '_'}, {'_', '_', '_'},  {'_', '_', '_'} };
    int turns = 1;

    cout << "\n\n˚~~~ Welcome to tic-tac-toe. Let's play! ~~~˚\n\n";
    cout << "\nMake a move by typing the numbers 0-2 for row.\nThen again 0-2 for position on that row.\n\n";
    display(board);

    while(turns < 10)
    {
      player1_turn(board);
      turns++;
      display(board);
      if (turns == 10)
        break;
      player2_turn(board);
      turns++;
      display(board);
    }
    cout << "That's a game! Who won?\n";
}

void display(char board[3][3])
{
  int i;
  int j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
}

void player1_turn (char board[3][3])
{
  int pos = 0;
  int row = 0;

  cout << "= = = Player One's Turn = = = \nEnter row (0-2): ";
  cin >> row;
  while (row < 0 || row > 2)
  {
    cout << "Whoops! Enter a number between 0 - 2.\n";
    cout << "Enter row (0-2): ";
    cin >> row;
  }
  cout << "Enter position (0-2): ";
  cin >> pos;
  while (pos < 0 || pos > 2)
  {
    cout << "Whoops! Enter a number between 0 - 2.\n";
    cout << "Enter position (0-2): ";
    cin >> pos;
  }
  if (board[row][pos] == '_')
  {
    board[row][pos] = 'X';
    return;
  }
  else
    cout << "Oops! That square has already been taken. Try again. \n";
    display(board);
    player1_turn(board);

}

void player2_turn (char board[3][3])
{
  int pos = 0;
  int row = 0;

  cout << "= = = Player Two's Turn = = = \nEnter row (0-2): ";
  cin >> row;
  while (row < 0 || row > 2)
  {
    cout << "Whoops! Enter a number between 0 - 2.\n";
    cout << "Enter row (0-2): ";
    cin >> row;
  }
  cout << "Enter position (0-2): ";
  cin >> pos;
  while (pos < 0 || pos > 2)
  {
    cout << "Whoops! Enter a number between 0 - 2.\n";
    cout << "Enter position (0-2): ";
    cin >> pos;
  }
  if (board[row][pos] == '_')
  {
    board[row][pos] = 'O';
    return;
  }
  else
    cout << "Oops! That square has already been taken. Try again. \n";
    display(board);
    player2_turn(board);

}
