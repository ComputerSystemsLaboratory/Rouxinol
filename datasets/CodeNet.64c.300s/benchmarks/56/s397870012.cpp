#include<bits/stdc++.h>
using namespace std;

int N;
int moon[2][11]= {
  {0,20,19,20,19,20,19,20,19,20,19},
  {0,20,20,20,20,20,20,20,20,20,20}
};

bool check(int y){
  if( y%3 == 0 ) return true;
  return false;
}

int solve(int Y,int M,int D){
  int ret = 0;
  for(int y=1;y<=Y;y++){
    bool leap = check(y);
    for(int m=1;m<=10;m++){
      for(int d=1;d<=moon[leap][m];d++){
	ret++;
	if( y == Y && m== M && d == D ) return ret;
      }
    }
  }
  return 0;
}

int main(){
  cin >> N;
  for(int ttt=0;ttt<N;ttt++){
    int Y1,M1,D1;
    cin >> Y1 >> M1 >> D1;
    cout << solve(1000,1,1) - solve(Y1,M1,D1) << endl;
  }
}