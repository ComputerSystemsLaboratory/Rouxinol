#include <iostream>

using namespace std;

int abs(int x)
{
  if (x >= 0) return x;
  else return -x;
}

int main(void)
{
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break; 
    int a[n];
    for (size_t i = 0; i < n; i++)
      cin >> a[i];
    int min = 1000000;
    for (size_t i = 0; i < n; i++) {
      int first;
      first = a[i];
      for (size_t j = i + 1; j < n; j++) {
	int diff = abs(first - a[j]);
	if (diff < min)
	  min = diff;	
      }
    }
    cout << min << endl;
  }
  return 0;

}