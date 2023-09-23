#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int gotiusa=a+b+c+d;
  cin>>a>>b>>c>>d;
  int ujimatu=a+b+c+d;
  cout<<(gotiusa>ujimatu ?gotiusa:ujimatu )<<endl;
}