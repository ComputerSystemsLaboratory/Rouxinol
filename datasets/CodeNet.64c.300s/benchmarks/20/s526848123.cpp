#include <bits/stdc++.h>
using namespace std;

int main()
{
  int d;

  while (cin >> d){
    int sum = 0, j = 1;
    for (int i = 1; i * d <= 600 - d; i++){
      sum += i * i * d * d * d;
    }
    cout << sum << endl;
  }
}