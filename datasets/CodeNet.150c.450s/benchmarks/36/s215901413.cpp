#include<bits/stdc++.h>
using namespace std;
int main(){
  int d;
  int s;
  int y;
  int x;
  while(cin>>d){
    s = 0;
    x = d;
    y = d*d;
    while(1){
      if(x == 600){
	break;
      }
      s += (y*d);
      x += d;     
      y = x*x;
      
    }
    cout<<s<<endl;
  }
}