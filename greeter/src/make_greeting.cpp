#include "../include/greeter/make_greeting.h"
#include <sstream>

std::string greeter::make_greeting(std::string const &name)
{
  std::stringstream stream;
  stream << "Hello " << name << "!";
  return stream.str();
}