#pragma once

#define GREETER_API

#ifdef _MSC_VER
#  ifdef GREETER_EXPORTS
#    define GREETER_API __declspec(dllexport)
#  else
#    ifdef GREETER_IMPORTS
#      define GREETER_API __declspec(dllimport)
#    endif
#  endif
#endif