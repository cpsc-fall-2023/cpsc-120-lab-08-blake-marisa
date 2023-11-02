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
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum = 0.0;

  for (int i = 1; i < arguments.size(); ++i) {
    try {
      double argValue = std::stod(arguments[i]);
      sum += argValue;
    } catch (const std::invalid_argument& e) {
      std::cout << "Invalid argumen\nt";
      return 1;
    }
  }
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average = sum / (arguments.size() - 1);
  // on its own line.
  std::cout << "average = " << average << std::endl;
  return 0;
}
