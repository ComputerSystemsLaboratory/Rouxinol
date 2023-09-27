#include <iostream>
#include <vector>

int main () {

  int x;
  std::vector<int> v;

  for(int n = 10000; n!=0; --n) {
    std::cin >> x;

    if(x == 0)
      break;
 
    v.push_back(x);
  }

  for(int n = 0 ; n != v.size(); n++)
    std::cout << "Case " << n + 1 << ": " << v[n] << std::endl;
  return 0;
}

