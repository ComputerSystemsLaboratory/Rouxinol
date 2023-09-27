#include<iostream>
using namespace std;

int main(){

  int a, cnt[101]={}, maxn=0;

  while(cin>>a){
    cnt[a]++;
    if(maxn<cnt[a]) maxn=cnt[a];
  }

  for(int i=1;i<=100;i++){
    if(maxn==cnt[i]) cout<<i<<endl;
  }

  return 0;
}