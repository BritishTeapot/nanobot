#include <iostream>
#include <vector>

enum signs_t { X, O, Empty };

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
  bool game = true;
  while (game) {

    for (int i = 0; i != 3; i++) {
      for (int j = 0; j != 3; j++) {
        std::cout << board[i][j];
      }
      std::cout << "\n";
    }
    if (player == X) {
      player = O;
    } else if (player == O) {
      player = X;
    }
    int i, j;
    std::cout << "Entr player " << player << " : ";

    std::cin >> i >> j;
    if (i > 3 && i > 3 || j > 3 && j > 3) {
      for (; i >= 3 && i >= 3 || j >= 3 && j >= 3;) {
        std::cout << "Not corect";
        std::cin >> i >> j;
      }
    }

    board[i][j] = player;

    for () {
    }
  }

  return 0;
}
