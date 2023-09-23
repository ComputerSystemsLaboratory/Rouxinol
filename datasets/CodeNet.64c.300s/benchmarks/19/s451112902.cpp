#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int x,n;
  int a[5000];
  long int sum,nextsum;
  while(cin >> n) {
    if(n == 0) break;
    for(int i=0;i<n;i++) {
      cin >> x;
      a[i] = x;
    }
    sum = *max_element(a,a+n);
    for(int i=0;i<n;i++) {
      if(a[i] >= 0) {
        nextsum = a[i];
        for(int j=1;j<n-i;j++) {
          nextsum += a[i+j];
          if(nextsum > sum)
            sum = nextsum;
        }
      }

    }
    cout << sum << endl;
  }
}