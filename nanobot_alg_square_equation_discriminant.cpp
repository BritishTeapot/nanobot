#include <cmath>
#include <vector>

std::vector<double> nanobot_alg_square_equation_discriminant(double a, double b,
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
