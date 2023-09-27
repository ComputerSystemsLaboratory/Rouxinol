#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  int field[30][30] = {};
  int n;
  int x,y;
  int rx,ry;
  int m;
  int h;
  int flag;
  std::string d;
  while(cin >> n){
    if(n == 0 ){
      break;
    }
    rx = 10;
    ry = 10;

    flag = 0;

    for(int i = 0;i < 25;i++){
      for(int j = 0;j < 25;j++){
        field[i][j] = 0;
      }
    }

    for(int i = 0;i < n;i++){
      cin >> x >> y;
      field[x][y] = 1;
    }

    cin >> m;

    for(int i = 0;i < m;i++){
      cin >> d >> h;
      if(d[0] == 'N'){
        for(int j = ry;j < ry+h+1;j++){
          field[rx][j] = 0;
        }
        ry += h;
      }else if(d[0] == 'E'){
        for(int j = rx;j < rx+h+1;j++){
          field[j][ry] = 0;
        }
        rx += h;
      }else if(d[0] == 'W'){
        for(int j = rx;j > rx-h-1;j--){
          field[j][ry] = 0;
        }
        rx -= h;
      }else if(d[0] == 'S'){
        for(int j = ry;j > ry-h-1;j--){
          field[rx][j] = 0;
        }
        ry -= h;
      } 
    }

    for(int i = 0;i < 25;i++){
      for(int j = 0;j < 25;j++){
        if(field[i][j] == 1){
          flag = 1;
        }
      }
    }

    if(flag == 1){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }
  }
}