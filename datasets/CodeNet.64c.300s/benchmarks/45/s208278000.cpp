//Princess's Gamble
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
  while(true){
    int N, M, P;
    cin>>N>>M>>P;
    if(N==0 && M==0 && P==0)break;
    int sum=0, winner;
    rep(i,N){
      int tmp;
      cin>>tmp;
      sum+=tmp;
      if(i+1==M)winner=tmp;
    }
    if(winner==0)cout<<"0"<<endl;
    else cout<<(int)((double)(sum*(100-P))/(double)(winner))<<endl;
  }
  return 0;
}