#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std; 
int main(){
  int n;  
  while(cin>>n){
    
    if(n==0)break;
    int a[200]={};
    int sum=0;
    for(int i=0;i<n;i++){    
      int b;
      cin>>b;
      a[i]=b;
      sum+=b;
    }
    sort(a,a+n);
    sum-=a[0];
    sum-=a[n-1];
    cout<<sum/(n-2)<<endl;
  }

  return 0;
}