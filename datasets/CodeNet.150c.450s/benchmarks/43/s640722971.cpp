#include<iostream>
using namespace std;
int main(void){
  int n;
  while(cin>>n&&n!=0){
    int sumA=0,sumB=0,a,b;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a>b) sumA+=a+b;
      else if(a<b) sumB+=a+b;
      else sumA+=a,sumB+=b;
    }
    cout<<sumA<<' '<<sumB<<endl;
  }
  return 0;
}