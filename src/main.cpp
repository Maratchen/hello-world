#include <iostream>
#include <greeter/make_greeting.h>

int main(int argc, const char* argv[])
{
  std::cout << greeter::make_greeting("World") << std::endl;
  return 0;
}