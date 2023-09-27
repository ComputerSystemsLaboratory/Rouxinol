#include <bits/stdc++.h>
using namespace std;
#include<cstdlib>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
typedef long long ll;

int main(){
  int n;
  cin >> n;

  int max = sqrt(n);
  vector<int> ans(100000,0);
  
  for(int i=1; i<max; i++){
    for(int j=1; j<max; j++){
      for(int k=1; k<max; k++){
        int sum = i*i+j*j+k*k+i*j+j*k+k*i;
        ans.at(sum)++;
      }
    }
  }

  for(int i=1;i<=n;i++){
    cout << ans.at(i) << endl;
  }
}