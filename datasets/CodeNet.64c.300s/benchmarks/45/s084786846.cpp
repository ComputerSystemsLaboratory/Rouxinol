#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,h,sum,a[111];
  while(1){
    cin >> n >> m >> h;
    if(n==0&&m==0&&h==0)break;
    sum=0;
    for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
    if(a[m-1]==0) {cout<<"0"<<endl;continue;}
    sum=sum*100*(100-h)/100;
    cout<<sum/a[m-1]<<endl;
  }
  return 0;
}