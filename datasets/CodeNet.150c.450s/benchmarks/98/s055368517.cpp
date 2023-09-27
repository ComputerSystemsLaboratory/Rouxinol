#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int n,m,sum1=0,sum2=0,ans1,ans2,d,max=100000,count=0;
    int s[110],t[110];
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    for(int i=0; i<n; i++){
       cin >> s[i];
       sum1 += s[i];
     }
    for(int i=0; i<m; i++){
      cin >> t[i];
      sum2 += t[i];
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        if(sum1+t[j]-s[i]==sum2+s[i]-t[j]){
          if(max>s[i]+t[j]){
            max=s[i]+t[j];
            ans1=s[i];
            ans2=t[j];
            count++;
          }
        }
      }
    }
    if(count != 0) cout << ans1 << " " << ans2 << endl;
    else cout << -1 << endl;
  }
  return 0;
}

    /*d = abs(sum1-sum2);
    if(d%2 == 0){
      d = d/2;
      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          if(abs(s[i]-t[j]) == d){
              if(max > s[i]+t[j]){
              ans1 = s[i];
              ans2 = t[j];
              max = ans1 + ans2;
              count++;
            }
          }
        }
      }
      if(count != 0) cout << ans1 << " " << ans2 << endl;
      else cout << -1 << endl;
    }
    else {
      cout << -1 << endl;
    }
  }
  return 0;
}*/

