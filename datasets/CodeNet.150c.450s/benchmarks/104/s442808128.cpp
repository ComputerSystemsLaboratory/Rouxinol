#include<iostream>
using namespace std;

int main(){
  int tate,yoko,a,b,m[31];
  char c;
  cin>>tate;
  for(int i=1;i<=tate;i++)
    m[i]=i;
  cin>>yoko;
  for(int i=0;i<yoko;i++){
    cin>>a>>c>>b;
    swap(m[a],m[b]);
  }
  for(int i=1;i<=tate;i++)
    cout<<m[i]<<endl;
  return 0;
}