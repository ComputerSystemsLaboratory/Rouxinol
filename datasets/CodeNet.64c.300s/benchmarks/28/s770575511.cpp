#include<iostream>
using namespace std;
int main(){
  int w,h;
  int x,y;
  int r;
  cin>>w>>h;
  cin>>x>>y;
  cin>>r;
  if(x-r>=0&&x+r<=w&&y-r>=0&&y+r<=h){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return (0);
}