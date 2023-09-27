#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}
int a[100000];
int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    lp(i,100000){
      a[i]=0;
    }
    lp(i,n){
      int start=0;
      int memo=0;
      char x,y,z;
      cin>>x>>y>>z;
      memo+=(x-'0')*10;
      memo+=y-'0';
      start+=memo*3600;
      memo=0;
      cin>>x>>y>>z;
      memo+=(x-'0')*10;
      memo+=y-'0';
      start+=memo*60;
      memo=0;
      cin>>x>>y;
      memo+=(x-'0')*10;
      memo+=y-'0';
      start+=memo;
      a[start]++;
      start=0;
      memo=0;
      cin>>x>>y>>z;
      memo+=(x-'0')*10;
      memo+=y-'0';
      start+=memo*3600;
      memo=0;
      cin>>x>>y>>z;
      memo+=(x-'0')*10;
      memo+=y-'0';
      start+=memo*60;
      memo=0;
      cin>>x>>y;
      memo+=(x-'0')*10;
      memo+=y-'0';
      start+=memo;
      a[start]--;
    }
    int maxs=0;
    for(int i=1;i<90000;i++){
      a[i]+=a[i-1];
      maxs=max(maxs,a[i]);
    }
    cout<<maxs<<endl;
  }
  return 0;
}

