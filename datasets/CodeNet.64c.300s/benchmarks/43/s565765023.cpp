#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
     
int main(){
  int a,b,c,d,e,f,g,h,A,B;
  cin>>a>>b>>c>>d>>e>>f>>g>>h;
  A=a+b+c+d;
  B=e+f+g+h;
  if(A>B){
    cout<<A<<endl;
  }else{
    cout<<B<<endl;
  }
  return 0;
}