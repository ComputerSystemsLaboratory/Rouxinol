#include <iostream>
using namespace std;
 
int main() {
  int n,x,i,j,num;
  while(1){
    int num=0;
    cin>>n;
    if (n==0) break;
    cin>>x;
    for (i=1;i<=n;i++){
      for (j=1;j<=n;j++){
        if (i>j&&j>x-i-j&&x-i-j>0) num++;
      }
    }
    cout<<num<<endl;
  }
}