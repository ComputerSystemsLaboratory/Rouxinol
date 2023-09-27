#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n,k;
  while(cin>>n>>k, n|k) {
    vector<int> v(n);
    for(int i=0; i<n; ++i)
      cin>>v[i];

    int maxsum = 0,nsum = 0;
    for(int i=0; i<k; ++i) {
      maxsum += v[i];
      nsum += v[i];
    }
    for(int i=k; i<n; i++) {
      maxsum = max(nsum-v[i-k]+v[i], maxsum);
      nsum = nsum-v[i-k]+v[i];
    }

    cout<<maxsum<<endl;
  }
}