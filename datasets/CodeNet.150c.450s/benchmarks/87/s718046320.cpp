#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main(){
  int h;
  while(cin>>h){
    if(h==0) return 0;
    
    vector<int> A[5];
    int x;
    rep(i,h){
      rep(j,5){
        cin>>x;
        A[j].push_back(x);
      }
    }
    rep(i,5) reverse(ALL(A[i]));
    rep(i,10){
      rep(j,5) A[j].push_back(0);
    }
    
    int ans=0;
    rep(i,10){
      for(int j=9;j>=0;j--){
        if(A[0][j]!=0 && A[0][j]==A[1][j] && A[0][j]==A[2][j] &&
           A[0][j]==A[3][j] && A[0][j]==A[4][j]){
          ans+=5*A[0][j];
          rep(k,5) A[k].erase(A[k].begin()+j);
        }
        else if(A[0][j]!=0 && A[0][j]==A[1][j] && A[0][j]==A[2][j] &&
           A[0][j]==A[3][j]){
          ans+=4*A[0][j];
          rep(k,4) A[k].erase(A[k].begin()+j);
        }
        else if(A[1][j]!=0 && A[1][j]==A[2][j] && A[1][j]==A[3][j] &&
           A[1][j]==A[4][j]){
          ans+=4*A[1][j];
          for(int k=1;k<=4;k++) A[k].erase(A[k].begin()+j);
        }
        else if(A[0][j]!=0 && A[0][j]==A[1][j] && A[0][j]==A[2][j]){
          ans+=3*A[1][j];
          for(int k=0;k<=2;k++) A[k].erase(A[k].begin()+j);
        }
        else if(A[1][j]!=0 && A[1][j]==A[2][j] && A[1][j]==A[3][j]){
          ans+=3*A[1][j];
          for(int k=1;k<=3;k++) A[k].erase(A[k].begin()+j);
        }
        else if(A[2][j]!=0 && A[2][j]==A[3][j] && A[2][j]==A[4][j]){
          ans+=3*A[2][j];
          for(int k=2;k<=4;k++) A[k].erase(A[k].begin()+j);
        }
      }
    }
    cout<<ans<<endl;
  }
  
  return 0;
}
