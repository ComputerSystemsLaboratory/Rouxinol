#include<iostream>
using namespace std;

int main(){
  int w,h,x,y,r;
  cin >> w >> h >> x >> y >> r;
  if(x==w || y==h){
    cout << "No\n";
  }else if(w-x<r || h-y<r){
    cout << "No\n";
  }else if(r>x || r>y){
    cout << "No\n";
  }else{
    cout << "Yes\n";
  }
  return 0;
}

