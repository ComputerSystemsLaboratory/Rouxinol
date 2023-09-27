#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n,m;
  while(1){
    cin >> n >> m;
    if(n==0) return 0;
    vector<int> taro(n),hanako(m);
    int tt=0,ht=0;
    for(int i=0;i<n;i++){
      cin >> taro[i];
      tt+=taro[i];
    }
    for(int i=0;i<m;i++){
      cin >> hanako[i];
      ht+=hanako[i];
    }
    int ta=101,ha=101;
    if((tt-ht)%2){
      cout << -1 << endl;
      continue;
    }else{
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(taro[i]==hanako[j]+(tt-ht)/2){
            if(ta+ha>taro[i]+hanako[j]){
              ta=taro[i];
              ha=hanako[j];
            }
          }
        }
      }
    }
    if(ta!=101){
      cout << ta << " " << ha << endl;
    }else{
      cout << -1 << endl;
    }
  }
  return 0;
}

