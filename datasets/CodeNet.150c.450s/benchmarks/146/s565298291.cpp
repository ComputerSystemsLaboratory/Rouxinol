#include <iostream>
using namespace std;
int main(){
  int n;
   float x1,x2,x3,x4,y1,y2,y3,y4;
  cin >> n;
  for(int i=0;i<n;i++) {
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if( (y2-y1)/(x2-x1) == (y4-y3)/(x4-x3) ) 
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  
  return 0;
}

