#include <iostream>
#include <algorithm>
#include <string>

int main(void)
{
	int base = 100000;
	
	int n;
	std::cin >> n;
	
	for (int i = 0; i < n; i++) {
		base = 1.05 * base;
    if (base % 1000 != 0) {
      base = (base / 1000) * 1000 + 1000;
    }
    else {
      base = (base / 1000) * 1000;
    }
	}
  
  std::cout << base << std::endl;
}