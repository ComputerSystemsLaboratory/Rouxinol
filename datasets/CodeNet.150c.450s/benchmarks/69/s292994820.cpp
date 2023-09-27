#include <iostream>
using namespace std;

int balls[10];

bool dfs(int i=0,int b_top=0,int c_top=0){
  //10個のボールを落とせたらtrue
  if(i == 10) return true;
  
  //Bのほうに入れる
  if(balls[i] > b_top && dfs(i+1,balls[i],c_top))
    return true;

  //Cの方に入れる
  if(balls[i] > c_top && dfs(i+1,b_top,balls[i]))
    return true;

  return false;
}

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<10;j++) cin >> balls[j];
    cout << (dfs() ? "YES":"NO") << endl;
  }
  return 0;
}