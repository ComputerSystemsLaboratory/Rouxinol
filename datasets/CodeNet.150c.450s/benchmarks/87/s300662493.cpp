#include<bits/stdc++.h>
using namespace std;

int H;
const int W = 5;
int fie[11][11];
int res;
bool del(){
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      int f =  fie[j][i];
      if( f && j+3<=W){
        int cnt = 0;
        for(int k=j; k < W && fie[k][i] == f; k++ )
          cnt++;
        if( cnt > 2 ){
          for(int k=j; k < W && fie[k][i] == f; k++ ){
            res += fie[k][i];
            fie[k][i] = 0;
          }
          return true;
        }
      }
    }
  }
  return false;
}

bool down(){
  bool f = false;
  for(int i=H-1;i>-1;i--){
    for(int j=0;j<W;j++){
      if( fie[j][i] == 0 ){
        fie[j][i] = fie[j][i-1];
        fie[j][i-1] = 0;
        if( fie[j][i] != 0 )
          f= true;
      }
    }
  }
  return f;
}

void view(){
  cout << "view" << endl;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        cout << fie[j][i] << " ";
      }     
      cout << endl;
    }
}

void sim(){

  while( del() ){
    while(del());
    while(down());
  }

}

int main(){
  while(cin >> H && H){

    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++) cin >> fie[j][i];
    }
    res = 0;
    sim();
    cout << res << endl;
  }
}