#include <iostream>
using namespace std;

int main()
{
  int W,H,x,y,r;
  cin >>W>>H>>x>>y>>r;

  if(x-r<0){
    cout<<"No"<<endl;
    return 0;
  }
  if(y-r<0){
    cout<<"No"<<endl;
    return 0;
  }
  if(x+r>W){
    cout<<"No"<<endl;
    return 0;
  }
  if(y+r>H){
    cout<<"No"<<endl;
    return 0;
  }

  cout<<"Yes"<<endl;
  return 0;
}