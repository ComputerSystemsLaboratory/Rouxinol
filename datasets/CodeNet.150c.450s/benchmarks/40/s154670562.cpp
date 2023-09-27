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
using namespace std;

class Dice{
    vector<int> n;
    int top;
  public:
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
      }
      // cerr << " " << n[0] << endl;
    }
    void input(){
      for(int i=0; i<6; i++) cin >> n[i];
    }
    void output(){
      cout << n[top] << endl;
    }
};

int main(){

  Dice d;
  d.input();
  string s;
  cin >> s;
  for(int i=0; i<s.size(); i++){
    d.roll( s[i] );
  }

  d.output();

  return 0;
}





// EOF