#include <iostream>

using namespace std;
using llong = long long;

llong A[5000];
llong P[5001];
int main(){
  int n;
  while(cin >> n&&n>0){
    for(int i=0;i<n;++i){
      cin >> A[i];
    }

    for(int i=1;i<=n;++i){
      P[i] = P[i-1] + A[i-1];
    }

    llong maxsum = -1000000000000;
    for(int i=0;i<n;++i){
      for(int j=i+1;j<=n;++j){
        if(P[j]-P[i]>maxsum){
          maxsum = P[j] - P[i];
        }
      }
    }
    cout << maxsum << endl;
  }
  return 0;
}