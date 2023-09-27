#include <iostream>

using namespace std;


int main() {

  int n,k;
  int a[100001];

  int max;
  int sum_seq;


  while(cin >> n >> k) {

    if(n==0 && k==0) break;

    for(int i=0;i<n;i++) cin >> a[i];

    max=0;

    sum_seq=0;

    for(int i=0;i<k;i++) sum_seq+=a[i];

    for(int i=0;i<=n-k;i++) {

      if(max<sum_seq) max=sum_seq;

      if(i!=n-k) sum_seq+=a[i+k]-a[i];

    }

    cout << max << endl;

  }

  return 0;

}