#pragma once

#include <string>
#include <greeter/config.h>

namespace greeter
{
  GREETER_API std::string make_greeting(std::string const &name);
}