#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const* argv[])
{
  char assignments[][5] = {
    {  0 ,  0 ,  0 ,  0 ,  0  },
    { '.', ',', '!', '?', ' ' },
    { 'a', 'b', 'c',  0 ,  0  },
    { 'd', 'e', 'f',  0 ,  0  },
    { 'g', 'h', 'i',  0 ,  0  },
    { 'j', 'k', 'l',  0 ,  0  },
    { 'm', 'n', 'o',  0 ,  0  },
    { 'p', 'q', 'r', 's',  0  },
    { 't', 'u', 'v',  0 ,  0  },
    { 'w', 'x', 'y', 'z',  0  }
  };
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::string s;
    std::cin >> s;
    for (std::string::const_iterator it = s.begin(); it != s.end(); ++it) {
      int key = (*it) - '0';
      if (key == 0) {
        continue;
      }
      int x = 0;
      for (; *it != '0'; ++it) {
        ++x;
      }
      --x;
      int a;
      if (key == 1)
        a = 5;
      else if (key == 7 || key == 9)
        a = 4;
      else
        a = 3;
      std::cout << assignments[key][x % a];
    }
    std::cout << std::endl;
  }
  return 0;
}