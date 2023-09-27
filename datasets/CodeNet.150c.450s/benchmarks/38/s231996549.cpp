#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    a=a*a;
    b=b*b;
    c=c*c;
    if(a+b==c)
      cout<<"YES"<<endl;
    else 
      cout<<"NO"<<endl;
  }
  return 0;
}