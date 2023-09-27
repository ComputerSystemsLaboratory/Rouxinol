#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>P;

int main(){

  int N,M;

  while(1){
    
    cin >>N>>M;
    if(N==0 && M==0)break;
    
    P a[N];

    for(int i=0 ; i < N ; i++){
      cin >>a[i].second>>a[i].first;
    }

    sort(a,a+N,greater<P>());

    for(int i=0 ; i < N ; i++){
      int d=min(M,a[i].second);
      M-=d;
      a[i].second-=d;
    }

    int ans=0;

    for(int i=0 ; i < N ; i++){
      ans+=a[i].first*a[i].second;
    }

    cout <<ans<<endl;

  }
  
  return 0;
}