#include<iostream>
using namespace std;
#include<vector>

int main(){
  while(1){
    int n,p;
    cin>>n>>p;
    if(n==0&&p==0)return 0;
    vector<int> a(n,0);
    int pool=p;
    int i=0;
    while(1){
      if(pool==0){
        pool+=a[i];
        a[i]=0;
      }else{
        pool--;
        a[i]++;
      }
      if(a[i]==p)break;
      i = (i+1)%n;
    }
/*
    while(1){
      for(i = 0;i<n;i++){
        if(pool==0){
          pool+=a[i];
          a[i]=0;
        }else{
          pool--;
          a[i]++;
        }
        if(a[i]==p)break;
      }
      if(a[i]==p)break;
    }
    */
    cout<<i<<endl;
  }
  return 0;
}