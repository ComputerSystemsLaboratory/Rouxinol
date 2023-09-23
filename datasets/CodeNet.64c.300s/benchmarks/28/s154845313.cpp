#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
  int W,H,x,y,r;
  cin>>W>>H>>x>>y>>r;
  if(x>=0&&x+r<=W&&y>=0&&y+r<=H){
    cout<<"Yes"<<endl;
    }
  else{
    cout<<"No"<<endl;
    }
 }