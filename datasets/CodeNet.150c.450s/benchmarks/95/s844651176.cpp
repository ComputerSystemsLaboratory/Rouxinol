#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n;
  while(cin >> n, n){
    vector<string> f(n);
    for(int i = 0; i < n; i++){
      cin >> f[i];
    }
    int cnt = 0;
    bool l = false, r = false;
    int pos = -1;
    for(int i = 0; i < n; i++){
      if(f[i] == "lu")l = true;
      else if(f[i] == "ld")l = false;
      if(f[i] == "ru")r = true;
      else if(f[i] == "rd")r = false;

      if(pos == -1 && l && r){
        pos = 1;
        cnt++;
      }else if(pos == 1 && !l && !r){
        pos = -1;
        cnt++;
      }
    }
    cout << cnt << endl;
  }
}