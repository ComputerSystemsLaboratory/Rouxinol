#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n, p;
  while(cin >> n >> p, n || p){
    vector<int> MayorS(n);
    int bowlS = p;
    int player = 0;
    while(1){
      if(bowlS > 1){      //??¨?????????
        MayorS[player]++;
        bowlS--;
      }else {
        if(bowlS == 1){
          MayorS[player]++;
          bowlS--;
          if(MayorS[player] == p){  //??????
            cout << player << endl;
            break;
          }
        }else {         //????????????or????????????
          if(MayorS[player] > 0){
            bowlS += MayorS[player];
            MayorS[player] = 0;
          }
        }
      }
      player++;
      if(player == n)player = 0;
    }
  }  
}