#include <iostream>
#include <utility>
using namespace std;

int main(void){
  while(1){
    int N;
    int n[200];
    int d[200];
    pair<int,int> pos[200];
    int left;
    int right;
    int bottom;
    int top;

    cin >> N;

    n[0] = 0;

    for(int i = 1 ; i < N ; i++){
      cin >> d[i];
      cin >> n[i];
    }

    if(N == 0){return 0;}

    if(N == 1){
      cout << 1 << " " << 1 << endl;
    }else{
      pos[0] = make_pair(0,0);
      for(int i = 1 ; i < N ; i++){
        switch(n[i]){
          case 0:
            pos[i] = make_pair(pos[d[i]].first - 1 , pos[d[i]].second);
            break;
          case 1:
            pos[i] = make_pair(pos[d[i]].first , pos[d[i]].second - 1);
            break;
          case 2:
            pos[i] = make_pair(pos[d[i]].first + 1 , pos[d[i]].second);
            break;
          case 3:
            pos[i] = make_pair(pos[d[i]].first , pos[d[i]].second + 1);
            break;
        }
      }

      int xmax = -256;
      int xmin = 256;
      int ymax = -256;
      int ymin = 256;

      for(int i = 0 ; i < N ; i++){
        int xtmp = pos[i].first;
        int ytmp = pos[i].second;
        if(xmax < xtmp){ xmax = xtmp; }
        if(xmin > xtmp){ xmin = xtmp; }
        if(ymax < ytmp){ ymax = ytmp; }
        if(ymin > ytmp){ ymin = ytmp; }
      }

      cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
    }
  }

}