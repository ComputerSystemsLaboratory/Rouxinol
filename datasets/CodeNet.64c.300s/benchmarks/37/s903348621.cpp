#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int N;
bool input(){
  cin>>N;

  return N!=0;
}

void solve(){
  int counter=0;
  for(int i=1;i+i+1<=N;i++){
    int sum=0;
    for(int j=i;sum<N;j++){
      sum+=j;
    }
    if(sum==N)counter++;
  }
  cout<<counter<<endl;
}

int main(){
  while(input()) solve();
  return 0;
}