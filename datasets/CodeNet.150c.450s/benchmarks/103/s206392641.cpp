#include <iostream>

using namespace std;

int cnt[101][10];
void rec(int idx, int d, int n){
  if(d >= 10)return;
  for(int i = idx+1 ; i < 10 ; i++){
    cnt[n+i][d+1]++;
    rec(i,d+1,n+i);
  }
}
void calc(){
  rec(-1,0,0);
}
int main(){
  calc();
  int n,s;
  while(cin >> n >> s, n||s){
    cout << cnt[s][n] << endl;
  }
  return 0;
}