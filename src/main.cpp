#include <iostream>
#include <Eigen/Dense>

int main() {
  Eigen::Vector3f v;
  v << 1.0f, 2.0f, 3.0f;
  std::cout << v << std::endl;
}
