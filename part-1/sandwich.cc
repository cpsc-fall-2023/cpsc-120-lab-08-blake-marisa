// Marisa Flores
// Flores.M2506@csu.fullerton.edu
// @FloresM2506
// Partners: @blakedemarest

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "your order:\n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";
  return 0;
}
