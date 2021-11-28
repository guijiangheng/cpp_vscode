#include <iostream>
#include <vector>
#include <numeric>

template<typename T>
struct Result {
  T x;
  int y;
};

auto foo() { return Result{ 1, 2 }; }

int main() {
  auto result = foo();
  std::cout << result.x << ", " << result.y << std::endl;
  return 0;
}
