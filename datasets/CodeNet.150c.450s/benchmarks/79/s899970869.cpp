#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n,r;
  while(1){
    cin >> n >> r;
    if(n==0) return 0;
    vector<int> card(n);
    vector<int> tmp(n);
    for(int i=0;i<n;i++){
      card[i]=n-i;
    }
    int p,c;
    for(int i=0;i<r;i++){
      cin >> p >> c;
      p--;
      for(int i=0;i<p;i++){
        tmp[i]=card[i];
      }
      for(int i=0;i<c;i++){
        card[i]=card[p+i];
      }
      for(int i=0;i<p;i++){
        card[c+i]=tmp[i];
      }
    }
    cout << card[0] << endl;
  }
  return 0;
}

