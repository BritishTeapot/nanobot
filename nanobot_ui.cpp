#include <iostream>
#include <vector>

enum signs_t { X, O, Empty };

using board_t = std::vector<std::vector<signs_t>>;

board_t board_make() {
  board_t board;
  std::vector<signs_t> line = {Empty, Empty, Empty};

  for (int i = 0; i != 5; i++) {
    board.push_back(line);
  }

  return board;
}

int main() {

  board_t board = board_make();

  for (;;) {

    for (int i = 0; i != 3; i++) {
      for (int j = 0; j != 3; j++) {
        std::cout << board[i][j];
      }
      std::cout << "\n";
    }
    int i_1, j_1;
    std::cout << "Entr plyar " player << " : ";
    std::cin >> i >> j;

    board[i][j] = player;
  }

  return 0;
}
