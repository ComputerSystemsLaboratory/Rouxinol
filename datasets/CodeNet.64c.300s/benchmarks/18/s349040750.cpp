#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(){

  int n;

  while(cin>>n, n){
    int a[40]={};
    for(int i=0;i<=n;i++){
      if(i==0) a[i]=1;
      if(i==1) a[i]=a[i-1];
      if(i==2) a[i]=a[i-1]+a[i-2];
      if(i>2) a[i]=a[i-1]+a[i-2]+a[i-3];
    }

    cout<<ceil((double)a[n]/10/365)<<endl;
  }

  return 0;
}

