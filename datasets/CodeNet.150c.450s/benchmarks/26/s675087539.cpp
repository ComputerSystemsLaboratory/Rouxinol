#include <iostream>

inline const char * getConditionStr(int a, int b)
{
  if (a < b)
    return "<";
  if (a > b)
    return ">";
  else
    return "==";
}

int main()
{
  int a = 0, b = 0;
  std::cin >> a >> b;

  std::cout << "a " << getConditionStr(a, b) << " b" << std::endl;

  return 0;
}