#include <iostream>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int a[10],b[2][11]={0},b1=1,b2=1,k=0;
    r(i,10)cin>>a[i];
    r(i,10){
      if(a[i]>b[1][b1-1])b[1][b1++]=a[i];
      else b[0][b2++]=a[i];
    }
    r(i,b1-1){if(b[1][i]>b[1][i+1])k++;}
    r(i,b2-1){if(b[0][i]>b[0][i+1])k++;}
    if(k)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}