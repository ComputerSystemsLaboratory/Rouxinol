//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_B
#include <iostream>
#include <string>
using namespace std;

int main(){
  int n, buf_n;
  cin >> n;
  string S = "S", H = "H", C = "C", D = "D";
  string buf_s;

  int cards[4][13];
  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      cards[i][j] = 0; //????????\??£???????????¶???????????¨???
    }
  }

  for(int i = 0; i<n; i++){
    cin >> buf_s >> buf_n;
    if(buf_s == S){
        cards[0][buf_n-1] = 1;
      }
    if(buf_s == H){
        cards[1][buf_n-1] = 1;
      }
    if(buf_s == C){
        cards[2][buf_n-1] = 1;
      }
    if(buf_s == D){
        cards[3][buf_n-1] = 1;
      }
  }


  for(int j=0; j<13; j++){
    if(cards[0][j] == 0){
      cout << S << " " << j+1 << endl;
    }
  }
  for(int j=0; j<13; j++){
    if(cards[1][j] == 0){
      cout << H << " " << j+1 << endl;
    }
  }
  for(int j=0; j<13; j++){
    if(cards[2][j] == 0){
        cout << C << " " << j+1 << endl;
    }
  }
  for(int j=0; j<13; j++){
    if(cards[3][j] == 0){
        cout << D << " " << j+1 << endl;
    }
  }
}