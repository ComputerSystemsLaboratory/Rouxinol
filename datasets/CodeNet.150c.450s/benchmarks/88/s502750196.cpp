#include <iostream>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int, int> P;
int INF = 1 << 20;
int main(){
  int h, w;
  while(1){
    cin >> h >> w;
    P ans = P(INF, INF);
    if(h == 0 && w == 0) break;
    int taikaku = h * h + w * w;
    //cout << "taiakaku = " << taikaku << endl;
    int min = INF;
    for(int i = 1; i <= 150; i++){
      bool flag = false;
      for(int j = i + 1; j <= 151; j++){
        int tmp = i * i + j * j;
        if(tmp == taikaku && i > h){
          //cout << "tmp = " << tmp  << endl;
          ans.first = i;
          ans.second = j;
          flag = true;
          break;
        }
        else if(taikaku < tmp && tmp < min){
          //cout << "min = " << min << endl;
          //cout << "tmp = " << tmp << endl;
          min = tmp;
          ans.first = i;
          ans.second = j;
        }
      }
      if(flag) break;
    }
    cout << ans.first << " " << ans.second << endl;
                         
  }
  return 0;
}