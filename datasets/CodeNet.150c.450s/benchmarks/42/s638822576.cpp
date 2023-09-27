#include<bits/stdc++.h>
using namespace std;
typedef pair<string,int> P;
P a[100005];
int n,m;
int sti;
int en;
int N;
P mpop();
void mpush(P);
int main(){
  cin >> n >> m;
  N=n;
  en=n-1;
  for(int i=0;i<n;i++){
    cin >> a[i].first >> a[i].second;
  }
  int co=0;
  while(n!=0){
     P x=mpop();
     n--;
     if(x.second<=m){
       co+=x.second;
       cout << x.first << " " << co << endl;
     }
     else{
       co+=m;
       x.second-=m;
       mpush(x);
       n++;
     }
  }
  return 0;
}
P mpop(){
  P re;
  // cout << "pop" << endl;
  while(a[sti].second==-1){
    sti++;
    if(sti>=N)sti=0;
  }
  re = a[sti];
  a[sti].second=-1;
  while(a[sti].second==-1&&n!=1){
    sti++;
    if(sti>=N)sti=0;
  }
  return re;
}
void mpush(P p){
  //cout << "push" << endl;
  en++;
  if(en==N)en=0;
  a[en]=p;
  while(a[sti].second==-1){
    sti++;
    if(sti>=N)sti=0;
  }
}