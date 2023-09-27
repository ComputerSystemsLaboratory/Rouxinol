#include<iostream>
using namespace std;

int main(){
    int cards[4][14];
    int n, kg;
    char ln;
    for(int i = 0;i < 4;++i){
       for( int j = 1;j < 14;++j){
         cards[i][j] = 0;
        }      
      }
    cin >> n;
    for( int o = 0; o < n;o++){
       cin >> ln >> kg;
       if( ln == 'S') cards[0][kg] = 1;
       if( ln == 'H') cards[1][kg] = 1;
       if( ln == 'C') cards[2][kg] = 1;
       if( ln == 'D') cards[3][kg] = 1;
      }
    for(int x = 0;x < 4;x++){
       for(int y = 1;y < 14;y++){
         if(cards[x][y] == 1) continue;
         if(x == 0) cout << 'S' << " " << y << endl;
         if(x == 1) cout << 'H' << " " << y << endl;
         if(x == 2) cout << 'C' << " " << y << endl;
         if(x == 3) cout << 'D' << " " << y << endl;
         }
       }
   return 0;
}