#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}

void calc(int a[],int f){
  for(int i=f*(f+1)*(f+2)/6;i<=1000000;i++){
    if(a[i]==0) a[i]=a[i-f*(f+1)*(f+2)/6]+1;
    else if(a[i]>a[i-f*(f+1)*(f+2)/6]+1) a[i]=a[i-f*(f+1)*(f+2)/6]+1;
  }
}

int x[1000001],b[1000001];
int main(){
  for(int i=1;i*(i+1)*(i+2)/6<1000000;i++){
    calc(x,i);
  }
  for(int i=1;i*(i+1)*(i+2)/6<1000000;i++){
    if(i*(i+1)*(i+2)/6%2==1){
    calc(b,i);
    }
  }
  while(1){
    int z;
    cin>>z;
    if(z==0) break;
    cout<<x[z]<<" "<<b[z]<<endl;
  }
  return 0;
}

