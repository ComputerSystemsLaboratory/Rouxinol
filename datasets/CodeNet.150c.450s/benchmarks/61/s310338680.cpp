#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;
int cnt = 0,X;

int main(){
  int N,A,B,C,y;
  while(true){
    cin >> N >> A >> B >> C >> X;
    if(N+A+B+C+X == 0)break;
    cnt = 0;
    vector<int> Y;
    for(int i=0;i<N;i++){
      cin >> y;
      Y.push_back(y);
    }
    int i,f = 0;
    for(i=0;i<=10000;i++){
      if(X == Y[f])f++;
      if(f == N)break;
      X = (X*A+B)%C;
      cnt++;
    }
    if(i == 10001)cnt = -1;

    cout << cnt << endl;
  }
  return 0;
}