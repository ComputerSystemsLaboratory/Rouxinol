#include <iostream>
#include <cstring>
using namespace std;
int N, M;
int crystal[21][21];
char ord[31];
int dist[31];

void solve() {
  memset(crystal, 0, sizeof crystal);
  
  for(int i=0;i<N;i++) {
    int x, y;
    cin>>x>>y;
    crystal[y][x] = 1;
  }
  
  cin>>M;
  for (int i = 0; i < M; i += 1) {
    cin>>ord[i]>>dist[i];
  }
  
  // explore
  int x = 10, y = 10, cnt = 0;
  // ツスツタツーツトツ地ツ点ツづ個陛ウツ静篠確ツ認
  if (crystal[y][x] == 1) {
    cnt++; crystal[y][x] = 0;
  }
  for (int i = 0; i < M; i += 1) {
    // ツ陛サツ古シツづ可督ョツつュ
    for (int j = 0; j < dist[i]; j += 1) {
      //cout<<x<<","<<y<<endl;
      if (ord[i] == 'N') {
        y++;
      } else if (ord[i] == 'S') {
        y--;
      } else if (ord[i] == 'E') {
        x++;
      } else {
        x--;
      }  
      // ツ陛ウツ静篠確ツ認
      if (crystal[y][x] == 1) {
        cnt++; crystal[y][x] = 0;
      }
    }
  }
  //cout<<cnt<<endl;
  if (cnt == N) {
    cout<<"Yes"<<endl;
  } else {
    cout<<"No"<<endl;
  }
}


int main (int argc, char const* argv[]) {
  while (cin>>N, N) {
    solve();
  }
  return 0;
}