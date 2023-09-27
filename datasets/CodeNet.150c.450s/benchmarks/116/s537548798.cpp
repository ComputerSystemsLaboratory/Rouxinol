#include <iostream>
using namespace std;

int main() {

  while(1) {
  int n,k;
  cin >> n >> k;
  if(n==0 && k==0) break;

  int a[100001] = {};

  for(int i=0;i<n;i++) cin >> a[i];

 
  int maxsum = 0;
  int sum;
  for(int i=0;i<k;i++) maxsum += a[i];

  sum = maxsum;
  for(int i=k;i<n;i++) {
    sum =sum + a[i] - a[i-k];
      if(sum > maxsum) maxsum = sum;
  }

  cout << maxsum <<endl;
  }

  return 0;
}