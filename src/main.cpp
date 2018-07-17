#include <iostream>

int main(int argc, const char* argv[])
{
  [res=std::ref(std::cout << "Hello")] { res.get() << " World!\n"; }();
  return 0;
}