#include <iostream>
#include <vector>

const int N = 10000;

int main() {
  int n = 0;
  std::vector<int> S;

  S.reserve(N);

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int x = 0;

    std::cin >> x;

    S.push_back(x);
  }

  int q = 0;
  std::vector<int> T;

  T.reserve(N);

  std::cin >> q;

  for (int i = 0; i < q; i++) {
    int x = 0;

    std::cin >> x;

    T.push_back(x);
  }

  int count = 0;
  
  for (std::vector<int>::iterator i = S.begin(); i != S.end(); ++i) {

    
    for (std::vector<int>::iterator j = T.begin(); j != T.end(); ++j) {
      if (*i == *j) {
	count++;

	T.erase(j);	

	break;
      }
    }
  }

  std::cout << count << std::endl;
  
  return 0;
}