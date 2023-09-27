#include<iostream>  
#include<string>  
#include<cstring>  
#include<algorithm>  
using namespace std;  
  
int main(){  
  
  int n,m,p;  
  int a;  
  int k;  
  int z[1001];  
  int ans;  
  
  while(true){  
    cin >> n >> m >> p;  
    if(!n && !m && !p) break;  
  
    a = 0;  
  
    for(int i=1;i<=n;i++){  
      cin >> k;  
      z[i] = k;  
      a += k;  
    }  
  
    p = 100 - p;  
  
    if(z[m] == 0) ans = 0;  
    else ans = a * p / z[m];  
  
    cout << ans << endl;  
  }  
}  