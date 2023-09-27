#include <iostream>
using namespace std;

int main(void){
  int n, i, cnt, lpos, rpos, tmp;
  string move;
  while(1){
    cin >> n;
    if(n == 0) break;
    lpos = 0;
    rpos = 0;
    cnt = 0;
    tmp = 0;
    for(i=0;i<n;i++){
      cin >> move;
      if(move == "lu") lpos = 1;
      if(move == "ld") lpos = 0;
      if(move == "ru") rpos = 1;
      if(move == "rd") rpos = 0;
      if(lpos == 1 && rpos == 1 && tmp == 0){
        cnt++;
        tmp = 1;
      }
      if(lpos == 0 && rpos == 0 && tmp == 1){
        cnt++;
        tmp = 0;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
