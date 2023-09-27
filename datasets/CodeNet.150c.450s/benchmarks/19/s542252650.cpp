#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int x,y;
  int i=0;

  do{
    i++;
    cin >>x >>y;
    if(x==0 && y==0) break;
    if(x>y) swap(x, y);
    cout <<x <<" " <<y <<endl;
  }while(x!=0||y!=0);

  return 0;
}