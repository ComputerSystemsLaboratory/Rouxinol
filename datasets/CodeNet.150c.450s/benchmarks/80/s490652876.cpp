#include<iostream>
using namespace std;
int main(){
  int j,m,s,e,score=0;
  for(int i=0;i<2;i++){
    cin >> j >> m >> s >> e;
    if(score<j+m+s+e) score = j + m + s + e;
  }
  cout << score << endl;
  return 0;
}