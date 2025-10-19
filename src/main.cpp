#include <format>
#include <iostream>
#include <limits>

int main() {
  int age;

  while (true) {
    std::cout << "How old are you?: ";
    std::cin >> age;

    if (!std::cin.fail()) break;

    std::cout << "ERROR, faulty input!\n";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  std::cout << std::format("You are {} years old!\n", age);

  return 0;
}