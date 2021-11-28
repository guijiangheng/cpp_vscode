#include <iostream>
#include <vector>
#include <numeric>

int main() {
  std::vector v{1, 2, 3, 4, 5};
  auto sum = std::accumulate(v.begin(), v.end(), 0, std::plus());
  std::cout << "sum: " << sum << std::endl;
  return 0;
}
