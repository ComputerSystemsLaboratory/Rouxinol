#include<iostream>

using namespace std;

int main(){
  int x,y;
  while (x!=0||y!=0){
    cin >> x >> y;
    if(x==0&&y==0){}
    else if(x<y){
      cout << x << " " << y << endl;
    }else if(y<=x){
      cout << y << " " << x << endl;
    }
  }return 0;
}

