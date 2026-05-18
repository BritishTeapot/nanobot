#include <iostream>
#include <vector>

enum signs_t { X = 'X', O = 'O', Empty = '-' };

using board_t = std::vector<std::vector<signs_t>>;

board_t board_make() {
  board_t board;
  std::vector<signs_t> line = {Empty, Empty, Empty};

  for (int i = 0; i != 3; i++) {
    board.push_back(line);
  }

  return board;
}

int main() {

  board_t board = board_make();

  signs_t player = X;
  bool is_finished = false;
  int turns = 0;
  while (!is_finished) {

    for (int i = 0; i != 3; i++) {
      for (int j = 0; j != 3; j++) {
        std::cout << (char)board[i][j];
      }
      std::cout << "\n";
    }

    if (player == X) {
      player = O;
    } else if (player == O) {
      player = X;
    }

    int i, j;
    std::cout << "Entr player " << (char)player << " : ";

    std::cin >> i >> j;
    if (i > 3 && i > 3 || j > 3 && j > 3) {
      for (; i >= 3 && i >= 3 || j >= 3 && j >= 3;) {
        std::cout << "Not corect";
        std::cin >> i >> j;
      }
    }

    while (board[i][j] != Empty) {
      std::cout << "Not corect";
      std::cin >> i >> j;
    }
    board[i][j] = player;

    for (int k = 0; k < 3; k++) {
      if (board[k][0] == player && board[k][1] == player &&
          board[k][2] == player) {
        is_finished = true;
      }
    }

    for (int k = 0; k < 3; k++) {
      if (board[0][k] == player && board[1][k] == player &&
          board[2][k] == player) {
        is_finished = true;
      }
    }

    bool is_diagonal1_full =
        board[0][0] == player && board[1][1] == player && board[2][2] == player;
    bool is_diagonal2_full =
        board[0][2] == player && board[1][1] == player && board[2][0] == player;

    if (is_diagonal1_full || is_diagonal2_full) {
      is_finished = true;
    }

    if (turns == 8) {
      break;
    }

    turns++;
  }

  for (int i = 0; i != 3; i++) {
    for (int j = 0; j != 3; j++) {
      std::cout << (char)board[i][j];
    }
    std::cout << "\n";
  }

  if (is_finished) {
    std::cout << "Player " << (char)player << " win (@^v^)!!!\n";
  } else {
    std::cout << "Tie >_<\n";
  }

  return 0;
}
