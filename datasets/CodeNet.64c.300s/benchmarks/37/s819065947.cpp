#include <iostream>
using namespace std;

/*連続する正の整数の組合せを求める*/
int Search_Consecutive_Integers(int n)
{
  int count = 0;

  for(int i = 1; 2 < n; i++) {
    n = n - i;
      if(n % (i + 1) == 0) {
        if(n >= 2)
          count++;
      }
  }
  return count;
}

int main()
{
  int num;

  while(1) {
    cin >> num;
    if(num <= 0)
      break;
    cout << Search_Consecutive_Integers(num) << endl;
  }

  return 0;
}

