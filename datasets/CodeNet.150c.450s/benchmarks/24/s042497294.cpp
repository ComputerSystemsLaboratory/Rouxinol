/*Priness's Marriage*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  int ok=0;
  while(ok==0){
  int n,m;
  cin >> n >> m;
  if(n==0 && m==0)return 0;
  pair<int,int> p[n];
  for(int i=0;i<n;i++){
    cin >> p[i].second >> p[i].first;
  }//firtst = danger second = walk
  sort(p,p+n);
  reverse(p,p+n);
  int num=0;
  for(int i=0;i<n;i++){
    if(m>=0){
      if(m>=p[i].second){
        m-=p[i].second;
        p[i].second=0;
      }else{
        p[i].second-=m;
        m=0;
        num+=p[i].second*p[i].first;
      }
    }else{
      num+=p[i].second*p[i].first;
    }
  }
  cout << num << endl;
  }
  return 0;
}