#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std; 
int main(){
  int a,b,c,d;
  int w,x,y,z;
  cin>>a>>b>>c>>d;
  cin>>w>>x>>y>>z;
  int A=a+b+c+d;
  int B=w+x+y+z;
  if(A>B) cout<<A<<endl;
  else if(A<B) cout<<B<<endl;
  else  cout<<A<<endl;
  
return 0;
}