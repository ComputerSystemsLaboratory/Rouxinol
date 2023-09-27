#include <bits/stdc++.h>
using namespace std;

int main(){
  int D[7],C;
  string S;
  for(int i=1;i<=6;i++){
    cin>>D[i];
  }
   cin>>S;
  for(int i=0;i<S.length();i++){
    if(S[i]=='S'){
      C=D[1],D[1]=D[5],D[5]=D[6],D[6]=D[2],D[2]=C;
    }else if(S[i]=='W'){
      C=D[1],D[1]=D[3],D[3]=D[6],D[6]=D[4],D[4]=C;
    }else if(S[i]=='E'){
      C=D[1],D[1]=D[4],D[4]=D[6],D[6]=D[3],D[3]=C;
    }else if(S[i]=='N'){
      C=D[1],D[1]=D[2],D[2]=D[6],D[6]=D[5],D[5]=C;
    }
  }
  cout <<D[1]<<endl;
}