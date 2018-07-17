#pragma once

#ifdef _MSC_VER
#  ifdef GREETER_EXPORTS
#    define GREETER_API __declcpec(dllexport)
#  else
#    ifdef GREETER_IMPORTS
#      define GREETER_API __declcpec(dllimport)
#    else
#      define GREETER_API
#    endif
#  endif
#endif