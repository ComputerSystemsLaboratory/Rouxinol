//Luck Manipulator
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int N, A, B, C, X;
int next(int x){
  return (A*x+B)%C;
}

int main(){
  while(true){
    cin>>N>>A>>B>>C>>X;
    if(N==0 && A==0 && B==0 && C==0 && X==0)break;
    int x=X;
    int Y[N];
    rep(i,N) cin>>Y[i];
    int flame=0, y=0;
    while(flame!=10001){
      if(Y[y]==x){
        y++;
        if(N==y)break;
      }
      x=next(x);
      flame++;
    }
    if(flame==10001)cout<<"-1"<<endl;
    else cout<<flame<<endl;
  }
  return 0;
}