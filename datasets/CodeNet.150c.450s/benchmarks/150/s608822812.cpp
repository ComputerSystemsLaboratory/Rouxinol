#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  int num[2000000];
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> num[i];
  }
  sort(num, num + n);
  for (int i = 0; i < n - 1; i++){
    cout << num[i] << ' ';
  }
  cout << num[n - 1] << endl;
  return (0);
}