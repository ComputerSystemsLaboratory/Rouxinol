#include <iostream>
using namespace std;
 
int main(){
  int a,cnt,b,c[5]={500,100,50,10,5};
  while(cin>>a&&a){
    cnt=0;
    b=1000-a;
    for(int i=0;i<5;i++) cnt+=b/c[i],b%=c[i];
    cnt+=b;
    cout<<cnt<<endl;
  }
  return 0;
}