#include "myobject.h"

#include <iostream>

auto main(int argc, char *argv[]) -> int {
  // COMMENT OUT THIS LINE TO CAUSE THE CRASH
  MyObject not_global_object;

  std::cout << "We made it to the end!" << std::endl;

  return 0;
}
