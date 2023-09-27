#include<bits/stdc++.h>
#define BIG 2000000001
using namespace std;

int main(){
  long long int a[1000];
  for(int i=0;i<1000;i++) a[i]=BIG;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=1;i<=n;i++){
    cout<<"node "<<i<<": key = "<<a[i]<<", ";
    if(i==1){
      if(n>1) cout<<"left key = "<<a[i+1]<<", ";
      if(n>2) cout<<"right key = "<<a[i+2]<<", ";
    }
    else{
      cout<<"parent key = "<<a[i/2]<<", ";
      if(a[2*i]!=BIG) cout<<"left key = "<<a[i*2]<<", ";
      if(a[2*i+1]!=BIG) cout<<"right key = "<<a[i*2+1]<<", ";
    }
    cout<<endl;
  }
  return 0;
}
    

