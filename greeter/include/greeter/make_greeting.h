#pragma once

#include <string>
#include "config.h"

namespace greeter
{
  GREETER_API std::string make_greeting(std::string const &name);
}