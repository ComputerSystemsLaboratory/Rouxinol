#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)

int main()
{
  while(1){
    int N;
    cin >> N;
    if(N == 0){
      break;
    }else{
      int x, y;
      int planet[21][21];
      fill(&planet[0][0], &planet[21][0], 0);
      REP(i, N){
        cin >> x >> y;
        planet[x][y] = 1;
      }
      int M;
      char d;
      int l;
      int px, py;
      px = py = 10;
      cin >> M;
      REP(i, M){
        cin >> d >> l;
        if(d == 'N'){
          REP(j, l + 1)
            planet[px][py + j] = 0;
          py += l;
        }else if(d == 'E'){
          REP(j, l + 1)
            planet[px + j][py] = 0;
          px += l;
        }
        else if(d == 'S'){
          REP(j, l + 1)
            planet[px][py - j] = 0;
          py -= l;
        }else{
          REP(j, l + 1)
            planet[px - j][py] = 0;
          px -= l;
        }
      }
      int c = 0;
      REP(i, 21)
        REP(j, 21)
          if(planet[i][j])
            c++;
      if(c)
        cout << "No" << endl;
      else
        cout << "Yes" << endl;
    }
  }
}