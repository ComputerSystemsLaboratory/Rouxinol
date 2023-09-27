#include <bits/stdc++.h>

using namespace std;

int solve(int y,int m,int d){
    int res=0;
    res+=((y-1)/3)*590;
    if(y%3==0){
        res+=390;
        res+=(m-1)*20;
        res+=d;
    }
    else if(y%3==1){
        res+=((m-1)/2)*39;
        if(m%2==0) res+=20;
        res+=d;
    }
    else{
        res+=195;
        res+=((m-1)/2)*39;
        if(m%2==0) res+=20;
        res+=d;
    }
    return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;cin>>n;
  for(int i=0;i<n;i++){
      int y,m,d;cin>>y>>m>>d;
      cout<<solve(1000,1,1)-solve(y,m,d)<<endl;
  }
}