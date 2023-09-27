#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  
  int a, s1=0, s2=0;

  for(int i=0;i<8;i++){
    cin>>a;
    if(i<4) s1+=a;
    else s2+=a;
  }

  cout<<max(s1, s2)<<endl;
  
  
  return 0;
}