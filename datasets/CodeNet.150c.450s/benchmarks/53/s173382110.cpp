#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int limit = sqrt(n);
  stringstream ss;
  ss << n << ":" ;

  for (int i = 2; i <= sqrt(n); i++) {
    //int count;
    while (n % i == 0) {
      n /= i;
      ss << " " << i;
      //count ++;
    }
  }
  if(n != 1)
    ss << " " << n;

  cout << ss.str() << endl;
  return 0;
}
  