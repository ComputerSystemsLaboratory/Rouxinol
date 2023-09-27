#include<iostream>
using namespace std;

typedef long long int lli;

lli nlist[50];

int main(){
  int N;
  nlist[0]=nlist[1]=1;
  for(int i=2;i<50;i++) nlist[i]=nlist[i-1]+nlist[i-2];
  cin>>N;
  cout<<nlist[N]<<endl;
  return 0;
}