#include <iostream>

using namespace std;

bool mp[21][21];

int main(){
  int n,m,num,cn;
  char dir;
  while(cin >> n && n){
    cn = 0;
    fill(mp[0],mp[21],0);
    int x,y,i,j;
    for(i=0;i<n;i++){
      cin >> x >> y;
      mp[x][y] = true;
    }
    cin >> m;
    x = y = 10;
    for(i=0;i<m;i++){
      cin >> dir >> num;
      if(dir == 'N'){
        for(j=0;j<num;j++){
          y++;
          if(mp[x][y]==true){
            cn++;
            mp[x][y] = false;
          }
        }
      }else if(dir == 'S'){
        for(j=0;j<num;j++){
          y--;
          if(mp[x][y]==true){
            cn++;
            mp[x][y] = false;
          }
        }
      }else if(dir == 'E'){
        for(j=0;j<num;j++){
          x++;
          if(mp[x][y]==true){
            cn++;
            mp[x][y] = false;
          }
        }
      }else if(dir == 'W'){
        for(j=0;j<num;j++){
          x--;
          if(mp[x][y]==true){
            cn++;
            mp[x][y] = false;
          }
        }
      }
    }
    if(cn == n)cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}

