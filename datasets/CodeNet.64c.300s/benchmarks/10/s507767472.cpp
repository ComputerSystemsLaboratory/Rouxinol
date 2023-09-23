#include<iostream>

using namespace std;

int main(){
  int x,y;

  while(cin >> x >> y)
    if(x==0&&y==0){
      break;
    }

    else if(x<=y){
      cout << x << " " << y << endl;
    }
    else
      cout << y << " " << x <<endl;
}