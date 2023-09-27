#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,a[1000],mina;
  while(1){
    cin>>n;
    if(n==0)
      break;
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    mina=1000000;
    for(int i=0;i<n-1;i++)
      if(a[i+1]-a[i]<mina)
        mina=a[i+1]-a[i];
    cout<<mina<<endl;
  }
}
