#include <fmt/format.h>
#include <greeter/make_greeting.h>
#include "localheader.h"

std::string greeter::make_greeting(std::string const &name)
{
  return fmt::format("{0} {1}!", SAMPLE_GREETING_STRING, name);
}