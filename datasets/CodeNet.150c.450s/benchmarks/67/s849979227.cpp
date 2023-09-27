#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n;
  while(1){
    cin >> n;
    if(n==0) return 0;
    int ans=0;
    int ruiseki=0;
    for(int i=1;i<=n/2;i++){
      ruiseki=0;
      for(int j=i;ruiseki<n;j++) ruiseki+=j;
      if(ruiseki==n) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

