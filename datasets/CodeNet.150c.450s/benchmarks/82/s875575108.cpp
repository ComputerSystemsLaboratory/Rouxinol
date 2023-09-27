
#include <iostream>
#include <cstdio>
#include <utility>
using namespace std;

class Dice{
  int T,S,E,W,N,D;

  public:
  Dice(int T, int S, int E,
      int W, int N, int D)
    : T(T), S(S), E(E),
    W(W), N(N), D(D) {}

  int get_top(){ return T; }
  int get_south(){ return S; }
  int get_east() { return E; }

  void rot(char c){
    int tmp;
    tmp = T;
    switch(c){
      case 'N':
        T = S; S = D; D = N; N = tmp;
        break;
      case 'S':
        T = N; N = D; D= S; S = tmp;
        break;
      case 'E':
        T = W; W = D; D = E; E = tmp;
        break;
      case 'W':
        T = E; E = D; D = W; W = tmp;
        break;
    }
  }
};

int main(){
  int num[6];
  for(int i=0;i<6;i++) cin>>num[i];
  Dice dice(num[0],num[1],num[2],num[3],num[4],num[5]);
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int front,top;
    cin>>top>>front;;
    int counter = 0;
    while(front!=dice.get_south()){
      if(counter == 3) dice.rot('W');
      dice.rot('S');
      counter ++;
    }
    while(top!=dice.get_top()){
      dice.rot('W');
    }
    cout<<dice.get_east()<<endl;
  }

  return 0;

}