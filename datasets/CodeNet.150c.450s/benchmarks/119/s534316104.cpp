#include <iostream>
#include <queue>
using namespace std;

int main(){
  bool map[52][52];
  int w,h;

  while(cin >> w >> h && w>0 && h>0){
    for(int i=0;i<52;i++){
      for(int j=0;j<52;j++)
        map[i][j]=false;
    }

    int land=0;

    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
        int c;
        cin >> c;
        if(c==1){
          map[i][j]=true;
          land++;
        }
      }
    }

    int visited=0,cnt=0;
    queue<int> cur;
    int d[8]={-w-3,-w-2,-w-1,-1,1,w+1,w+2,w+3};

    while(visited<land){
      cnt++;
      for(int i=0;i<(w+2)*(h+2);i++){
        if(map[i/(w+2)][i%(w+2)]){
          map[i/(w+2)][i%(w+2)]=false;
          visited++;
          cur.push(i);
          break;
        }
      }
      while(!cur.empty()){
        for(int i=0;i<8;i++){
          if(map[(cur.front()+d[i])/(w+2)][(cur.front()+d[i])%(w+2)]){
            map[(cur.front()+d[i])/(w+2)][(cur.front()+d[i])%(w+2)]=false;
            visited++;
            cur.push(cur.front()+d[i]);
          }
        }
        cur.pop();
      }
    }

    cout << cnt << endl;
  }

  return 0;
}