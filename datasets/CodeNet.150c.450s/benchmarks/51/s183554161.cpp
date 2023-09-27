#include <iostream>
using namespace std;

int a[31];

int main()
{
  int n, m = 28;

  while (m--){
    cin >> n;
    a[n]++;
  }
  for (int i = 1; i <= 30; i++){
    if (a[i] == 0){
      cout << i << endl;
    }
  }
  return 0;
}