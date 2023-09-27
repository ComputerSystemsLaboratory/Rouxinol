#include<bits/stdc++.h>

using namespace std;
#define REP(i,n) for(int i = 0;i < n ;++i)

int tile[11][5];

int main()
{
  int h;

  while(cin >> h,h){
    REP(i,11)REP(j,5){
      tile[i][j] = -1;
    }
    REP(i,h)REP(j,5){
      cin >> tile[h-1-i][j];
    }
    int ans = 0;
    bool update = false;
    while(true){
      update = false;
      REP(it,11){
        bool t1 = tile[it][0] == tile[it][1] && tile[it][0] != -1; 
        bool t2 = tile[it][1] == tile[it][2] && tile[it][1] != -1; 
        bool t3 = tile[it][2] == tile[it][3] && tile[it][2] != -1; 
        bool t4 = tile[it][3] == tile[it][4] && tile[it][3] != -1; 
        bool y1 = t1 && t2;
        bool y2 = t2 && t3;
        bool y3 = t3 && t4;
        if(y1 && y2 && y3){
          ans += tile[it][0]*5;
          REP(i,5){
            tile[it][i]=-1;
          }
          update = true;
        }
        else if(y1 && y2 || y2 && y3){
          ans += tile[it][y3]*4;
          REP(i,4){
            tile[it][i + y3]=-1;
          }
          update = true;
        }
        else if(y1 || y2 || y3){
          ans += tile[it][2]*3;
          REP(i,3){
            tile[it][i + y2 + ((int)y3)*2] = -1;
          }
          update =true;
        }
      }
      REP(it,10){
        REP(i,5){
          if(tile[it][i] == -1){
            int itt = it;
            while(tile[++itt][i] == -1 && itt != 10);
            swap(tile[it][i],tile[itt][i]);
          }
        }
      }
    if(!update)break;
    }
    cout << ans << endl;
  }
}