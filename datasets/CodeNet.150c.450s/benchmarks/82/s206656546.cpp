#include <bits/stdc++.h>
 
using namespace std;

#define rep(i,n) for(int i = 0 ; i < n ; i++) 

class Dice{
private:
  int tmp;
public:
  int d[6];
 
  void rollN(){
    tmp = d[0];
    d[0] = d[1];
    d[1] = d[5];
    d[5] = d[4];
    d[4] = tmp;
  }
  
  void rollE(){
    tmp = d[0];
    d[0] = d[3];
    d[3] = d[5];
    d[5] = d[2];
    d[2] = tmp;
  }
 
  void rollS(){
    tmp = d[0];
    d[0] = d[4];
    d[4] = d[5];
    d[5] = d[1];
    d[1] = tmp;
  }
 
  void rollW(){
    tmp = d[0];
    d[0] = d[2];
    d[2] = d[5];
    d[5] = d[3];
    d[3] = tmp;
  }

  void rotation(){
    tmp = d[1];
    d[1] = d[3];
    d[3] = d[4];
    d[4] = d[2];
    d[2] = tmp;
  }

  int getRight(int top,int front){
    rep(i,3){
      rollN();
      if(top == d[0]){
        break;
      }
      rollW();
      if(top == d[0]){
        break;
      }
    }
    rep(i,3){
      if(front == d[1]){
        break;
      }
      rotation();
    }

    return d[2];
  }
};
 
int main(){
  Dice dice;
  int q,top,front;
 
  rep(i,6){
    cin >> dice.d[i];
  }
  cin >> q;
  while(q--){
    cin >> top >> front;
    cout << dice.getRight(top,front) << endl;
  }
 
  return 0;
}