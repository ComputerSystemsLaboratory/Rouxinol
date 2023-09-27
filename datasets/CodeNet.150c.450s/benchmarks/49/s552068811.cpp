#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

using namespace std;

int main(){
  int n,min,max,result;
  int score[100];

  while(true){

    cin >> n;
    if(n == 0) break;

    result = 0;
    min = 1000;
    max = 0;

    REP(i,n){
      int score;
      cin >> score;
      if(max < score) max = score;
      if(min > score) min = score;
      result += score;
    }
    cout << (result - max - min)/(n-2) << endl;
  }
  return 0;
}