#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
 int n;
    cin >> n;
    vector<int> ans(n+1);
    
    for(int i = 1; i <= sqrt(n);i++) {
     for(int j = 1; j<= sqrt(n);j++){
       for(int k = 1; k<=sqrt(n);k++){
          int s = i*i+j*j+k*k+i*j+j*k+i*k;
           if(s > n) {
            break;
           }
           ans[s]++;   
      }
     }
    }
    
    for(int i = 1; i<=n;i++) {
     cout << ans[i] << endl;
    }
    
}