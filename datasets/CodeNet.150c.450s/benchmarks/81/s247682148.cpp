/*
ツδ渉ーツシツδδδ仰フツδ債イツドツづ?全ツ点ツ甘板催?短ツ仰猟猟」ツづーツ仰?づ淞づ?つィツつォツづ慊つキツ。
ツつサツつオツつスツづァツ、ツ篠ゥツ閉ェツづ個陳ャツづーツづ?つアツづ可つキツづゥツつゥツづーツ考ツつヲツづ?、ツ堕シツづ個陳ャツづ可行ツつュツつスツづ淞づ個コツスツトツづーツ仰?づ淞づ慊つキツ。
ツ?ィツ禿アツ重ツδ仰ーツプ
ツ暗ェツ氾板渉ャツつウツつ「ツコツスツトツづ可づ按づ?つスツ陳ャツづーツ出ツ療債つオツづ慊つオツづ・ツつ、ツ。
 */
#include <iostream>
using namespace std;

#define INF 999999999

int n, m; //ツ陳ャツづ個青? ツ督ケツづ個青?
int t[12][12];

void init(){
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      t[i][j] = INF;
    }
  }
}

void wf(){
  for(int k = 0; k < n; k++){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(i == j) continue;
        t[i][j] = min(t[i][j], t[i][k] + t[k][j]);
      }
    }
  }
}

int main(){
  while(cin >> m, m){
    n = 0;
    init();

    for(int i = 0; i < m; i++){
      int a, b, cost;
      cin >> a >> b >> cost;
      n = max(n, max(a + 1, b + 1));
      t[a][b] = t[b][a] = cost;
    }

    wf();

    int ans = 0;
    int ansCost = INF;

    for(int i = 0; i < n; i++){
      int cost = 0;

      for(int j = 0; j < n; j++){
        if(i == j) continue;
        cost += t[i][j];
      }

      if(ansCost > cost){
        ans = i;
        ansCost = cost;
      }
    }

    cout << ans << " " << ansCost << endl;
  }
}