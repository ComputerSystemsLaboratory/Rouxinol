#include<iostream>
using namespace std;

int main(){
  int n,x,cul;
  do{
    cin >> n >> x;
    if(!(n == 0 && x == 0)){
      cul = 0;
      for(int min=1;min<x/3;min++){
        for(int mid=min+1;mid<x-min-mid;mid++){
          if(x-min-mid<=n) cul++;
        }
      }
      cout << cul << endl;
    }
  }while(!(n == 0 && x == 0));
}
