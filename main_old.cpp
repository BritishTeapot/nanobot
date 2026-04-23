#include <cmath>
#include <iostream>
#include <string>
#include <vector>

std::vector<double> nb_alg_square_equation_discriminant(double a, double b,
                                                        double c) {

  // b^2 - 4ac
  double determinant = b * b - 4 * a * c;

  if (determinant < 0) {
    return {};
  } else if (determinant == 0) {
    // (-b + determinant^(1/2))/2a
    return {-b / (2 * a)};
  } else {
    return {(-b + std::sqrt(determinant)) / (2 * a),
            (-b - std::sqrt(determinant)) / (2 * a)};
  }
}

bool find_in_vector(std::string element, std::vector<std::string> vec) {
  bool is_present = false;
  for (std::string s : vec) {
    if (s == element) {
      is_present = true;
      break;
    }
  }

  return is_present;
}

void print_help(std::vector<std::string> sections) {
  for (std::string section : sections) {
    std::cout << section << "\n";
  }
}

struct section {
private:
  std::vector<section> subjects;
  std::string name;

public:
  bool is_this_section(std::string name) { return this->name == name; }

  std::string solve_problem(std::string problem) {}
};

int main() {

  std::vector<section> math_section_s = {

  };

  while (true) {

    std::string math_section = "";
    std::cin >> math_section;
    if (math_section == "help") {
      print_help(math_section_s);
      continue;
    }

    if (!find_in_vector(math_section, math_section_s)) {
      std::cout << "UNKNOWN COMMAND\n";
      continue;
    }

    std::string math_subject = "";
    std::cin >> math_subject; // help
    while (math_subject == "help" && math_section == "alg") {
      print_help(math_subject_s);
      std::cin >> math_subject; // square_equations
    }

    if (!find_in_vector(math_subject, math_subject_s)) {
      std::cout << "UNKNOWN COMMAND\n";
      continue;
    }

    std::string math_method = "";
    std::cin >> math_method;
    if (math_method == "help") {
      print_help(math_method_s);
      continue;
    }

    if (!find_in_vector(math_subject, math_subject_s)) {
      std::cout << "UNKNOWN COMMAND\n";
      continue;
    }

    if (math_section == "alg" && math_subject == "square_equation" &&
        math_method == "discriminant") // nanobot 1 grup algebra
    {
      double n_1, n_2, n_3;
      std::cin >> n_1 >> n_2 >> n_3;
      std::vector<double> ret =
          nb_alg_square_equation_discriminant(n_1, n_2, n_3);

      for (double i : ret) {
        std::cout << i << " ";
      }
    }
  }
}
