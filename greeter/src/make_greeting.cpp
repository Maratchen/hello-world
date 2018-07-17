#include <sstream>
#include <greeter/make_greeting.h>
#include "localheader.h"

std::string greeter::make_greeting(std::string const &name)
{
  std::stringstream stream;
  stream << SAMPLE_GREETING_STRING << " " << name << "!";
  return stream.str();
}