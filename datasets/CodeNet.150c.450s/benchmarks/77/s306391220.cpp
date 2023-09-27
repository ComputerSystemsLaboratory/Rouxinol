#include <bits/stdc++.h>
using namespace std;
vector <string> v;
string s;

int main(){
  int N;
  string  ans;
  char drc[] = {'N','W','S','E'};
  int d_xy[][2] = {{0,1},{-1,0},{0,-1},{1,0}};
  cin >>N;

  while (N != 0) {
    ans = "Yes";
    int mp[21][21] = {0};
    int M;
    int jems = 0;

    for(int i = 0;i<N;i++){
      int x,y;
      cin >>x>>y;
      mp[x][y]++;
    }
    cin >>M;
    int x_now = 10, y_now = 10;
    for (int i = 0;i<M;i++){
      char d;
      cin >> d;
      for(int j = 0;j<4;j++){
        if(d == drc[j]){
          int g;
          cin >> g;
          for(int k = 0; k < g; k++){
            jems += mp[x_now += d_xy[j][0]][y_now += d_xy[j][1]];
            if(mp[x_now][y_now])mp[x_now][y_now] = 0;
          }
        }
      }
    }
    if(jems != N)ans = "No";
    v.push_back(ans);
    cin >> N;
  }

  for (int i = 0;i<(int)v.size();i++){
    cout <<v[i]<<endl;
  }
  return 0;
}

