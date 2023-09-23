#include <iostream>
using namespace std;

int main(){
  int n;
  int max, min; long sum;

  cin >> n;
  long a[n];
  
  for(int i = 0; i < n; i++) cin >> a[i];

  max = -1000000; min = 1000000; sum = 0;
  for (int i = 0; i < n; i++) {
    if(a[i] > max) max = a[i];
    if(a[i] < min) min = a[i];
    sum += a[i];
  } 

  cout << min << " " << max << " " << sum << endl;
}