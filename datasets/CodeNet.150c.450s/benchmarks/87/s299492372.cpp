#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  
  while(1){
    int h;
    cin >> h;
    if(h == 0) break;
    int s[h+1][5];
    fill(&s[0][0], &s[0][5], -1);
    for(int i = 1; i < h+1; i++){
      for(int j = 0; j < 5; j++){
        cin >> s[i][j];
      }
    }
    int ans = 0;
    int c = 0;
    while(1){
      for(int i = h; i > 0; i--){
        if(s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][2] == s[i][3] && s[i][3] == s[i][4] && s[i][0] > 0){
          ans += s[i][0]*5;
          fill(&s[i][0], &s[i][5], 0);
        }else if(s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][2] == s[i][3] && s[i][0] > 0){
          ans += s[i][0]*4;
          fill(&s[i][0], &s[i][4], 0);
        }else if(s[i][1] == s[i][2] && s[i][2] == s[i][3] && s[i][3] == s[i][4] && s[i][1] > 0){
          ans += s[i][1]*4;
          fill(&s[i][1], &s[i][5], 0);
        }else if(s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][0] > 0){
          ans += s[i][0]*3;
          fill(&s[i][0], &s[i][3], 0);
        }else if(s[i][2] == s[i][3] && s[i][3] == s[i][4] && s[i][2] > 0){
          ans += s[i][2]*3;
          fill(&s[i][2], &s[i][5], 0);
        }else if(s[i][1] == s[i][2] && s[i][2] == s[i][3] && s[i][1] > 0){
          ans += s[i][1]*3;
          fill(&s[i][1], &s[i][4], 0);
        }else{
          c++;
        }
      }
      if(c == h) break;
      c = 0;
      for(int i = 0; i < 5; i++){
        for(int j = h; j > 0; j--){
          if(s[j][i] == -1){
            for(int k = j; k >= 0; k--){
              s[k][i] = -1;
            }
            break;
          }
          while(s[j][i] == 0){
            for(int k = j; k > 0; k--){
              swap(s[k][i], s[k-1][i]);
            }
            s[0][i] = -1;
          }
        }
      }
    }
    cout << ans << endl;
  }
}