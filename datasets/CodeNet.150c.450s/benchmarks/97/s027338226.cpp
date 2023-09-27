#include<iostream>
#include<cstring>
#include<queue>
#include<map>
#include<vector>
using namespace std;
#define fr first
#define sc second
typedef pair<int,int> P;
int dx[] = {0,1,0,-1} , dy[] = {-1,0,1,0};
int main(){
  int N,n,d;
  while(cin >> N , N){
    P p[N];
    int bix=0,biy=0,mix=0,miy=0;
    p[0] = P(0,0);
    for(int i = 1; i < N ; i++){
      cin >> n >> d;
      p[i] = P(p[n].fr + dx[d],p[n].sc + dy[d]);
      bix = max(p[i].fr , bix);
      biy = max(p[i].sc , biy);
      mix = min(p[i].fr , mix);
      miy = min(p[i].sc , miy);
    }
    cout << biy - miy + 1 << " " << bix - mix + 1 << endl;
  }
}