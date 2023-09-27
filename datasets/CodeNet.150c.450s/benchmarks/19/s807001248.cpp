#include<iostream>
using namespace std;
int main(){
  int x;
  int y;
  for(int i=1;;i++){
    cin >> x >> y;
    if(x==0 && y==0)break;
    if(x<=y){
      cout << x << " " << y << endl;
    }else{
      cout << y << " " << x << endl;
    }
  }
}