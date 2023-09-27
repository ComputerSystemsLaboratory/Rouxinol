#include <iostream>

int main(void) {
  std::string s1;
  std::string s2;

  std::getline(std::cin, s1);
  std::getline(std::cin, s2);
  
  bool compared = true;
  
  for (int i = 0; i < s1.size(); i++) {
    compared = true;
    
    for (int j = 0; j < s2.size(); j++) {
      int k = (i + j) % s1.size();

      if (s1[k] != s2[j]) {
	compared = false;
	
	break;
      }
    }

    if (compared) {
      break;
    }
  }

  if (compared) {
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }

  std::cout << std::endl;

  return 0;
}