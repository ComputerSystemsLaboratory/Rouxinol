#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<random>
using namespace std;

class Dice{
  public:
    vector<int> n;
    int top;
    Dice(){
      n.resize(6);
      top = 0;
    }
    void roll(char c){
      int tmp = n[0];
      if( c == 'E' ){
        n[0] = n[3];
        n[3] = n[5];
        n[5] = n[2];
        n[2] = tmp;
      }else if( c == 'W' ){
        n[0] = n[2];
        n[2] = n[5];
        n[5] = n[3];
        n[3] = tmp;
      }else if( c == 'N' ){
        n[0] = n[1];
        n[1] = n[5];
        n[5] = n[4];
        n[4] = tmp;
      }else if( c == 'S' ){
        n[0] = n[4];
        n[4] = n[5];
        n[5] = n[1];
        n[1] = tmp;
      }else if( c == 'R' ){
        tmp = n[4];
        n[4] = n[3];
        n[3] = n[1];
        n[1] = n[2];
        n[2] = tmp;
      }else if( c == 'L' ){
        tmp = n[4];
        n[4] = n[2];
        n[2] = n[1];
        n[1] = n[3];
        n[3] = tmp;
      }

    }
    void input(){
      for(int i=0; i<6; i++) cin >> n[i];
    }

    void output_top(){
      cout << n[top] << endl;
    }
};

bool diff_check(Dice d, Dice d2){
  random_device rnd;
  string con = "NSEW";

  int cnt = 0;
  while(true){
    if( cnt >= 1000 ) break;
    d2.roll( con[rnd()%4] );
    if( d.n[0] == d2.n[0] ){
      if( d.n[5] != d2.n[5] ) break;

      for(int i=0; i<4; i++){
        d2.roll('R');
        bool f = true;
        for(int i=1; i<5; i++){
          if( d.n[i] != d2.n[i] ) f = false;
        }
        if( f ){
          return true;;
        }
      }

      break;
    }
    cnt++;
  }
  return false;
}

int main(){
  random_device rnd;
  string con = "NSEW";

  Dice d;
  d.input();

  int q;
  cin >> q;
  for(int i=0; i<q; i++){
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    while(true){
      if( cnt >= 1000 ) break;
      d.roll( con[rnd()%4] );
      if( d.n[0] == a ){
        for(int i=0; i<4; i++){
          d.roll('R');
          if( d.n[1] == b ){
            cout << d.n[2] << endl;
          }
        }

        break;
      }
      cnt++;
    }

  }

  // d.output_top();

  return 0;
}





// EOF