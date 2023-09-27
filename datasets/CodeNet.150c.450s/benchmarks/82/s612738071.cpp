#include<iostream>
using namespace std;

struct Cube {
  public:
  int f[6];
  void roll(int i, int j, int k, int l){
    int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t; 
  }
  void roll_x() { roll(0,2,5,3); } 
  void roll_y() { roll(0,1,5,4); }
  void roll_z() { roll(1,2,4,3); }
    
};

int getRight(Cube c, int top, int front); //Cube入れんと事故る main内で入れてる

int main() {
  Cube c;
  for ( int i = 0; i < 6; i++ ) cin >> c.f[i];
  int n;
  cin >> n;
  int top, front;
  for ( int i = 0; i < n; i++ ) {
      cin >> top >> front; 
      cout << getRight(c, top, front) << endl;
  }
  return 0;
}

int getRight(Cube c, int top, int front) { 
    for ( int j = 1; j <= 6; j++ ) { //ちゃんと下辿ればeasyわかる
      for ( int i = 1; i <= 4; i++ ) { //3だと毎回元に戻らない
          if ( top == c.f[0] && front == c.f[1] ) return c.f[2]; 
          c.roll_z(); 
      }
      //各out loopで下を1回
      if ( j % 2 == 0) c.roll_x();
      else c.roll_y();
    }
}

