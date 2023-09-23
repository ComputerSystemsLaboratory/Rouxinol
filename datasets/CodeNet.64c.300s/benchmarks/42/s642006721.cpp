#include <iostream>
#include <cstring>
using namespace std;

int x,y,cnt;
int mas[21][21];
void move(char muki,int mv){
  for(int i=0;i<mv;i++){
    if(muki == 'N') y--;
    else if(muki == 'W') x--;
    else if(muki == 'S') y++;
    else if(muki == 'E') x++;
    if(mas[y][x] == 1){
      mas[y][x] = 0;
      cnt++;
    }
  }
}

int main(){
  char muki;
  int n,m,mo;
  while(cin >> n,n){
    memset(mas,0,sizeof(mas));
    for(int i=0;i<n;i++){
      cin >> x >> y;
      mas[20-y][x] = 1;
    }
    y = 10; x = 10;
    cnt = 0;
    cin >> m;
    for(int i=0;i<m;i++){
      cin >> muki >> mo;
      move(muki,mo);
    }
    cout << ((cnt == n)? "Yes":"No") << endl;
  }
}