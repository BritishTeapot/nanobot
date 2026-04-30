#include "nanobot_route.h"
#include <iostream>
#include <string>

int main() {

  std::cout << "Etere your name" << std::endl;
  std::string name_user = "";
  std::cin >> name_user;

  for (int i = 0; i == 0;) {
    std::cout << name_user << " -> ";
    std::string request_user = "";
    std::cin >> request_user;

    if (request_user == "The end") {
      i++;
    }
    std::string answer_nanobot = "";
    answer_nanobot = answer_nanobot_return(request_user);
    std::cout << answer_nanobot << std::endl;
  }
  return 0;
}
