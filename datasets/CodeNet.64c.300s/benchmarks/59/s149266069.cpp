#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int u) {
    if (u <= 1)
        return false;
    if (u == 2 || u == 3)
        return true;
    if (u % 2 == 0)
        return false;
    int m = (int) sqrt(u);
    for (int i = 3; i <= m; i += 2)
        if (u % i == 0)
            return false;
    return true;
}

int main(int argc, char const *argv[]) {
  int N;
  int input;
  int res = 0;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> input;
    if(is_prime(input)){
      res++;
    }
  }

  cout << res << endl;
  return 0;
}