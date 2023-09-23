#include<iostream>
using namespace std;

int main(){
    int n, b, c, d, f;
    int house[5][4][11];
    for(int i = 1;i < 5;++i){
       for(int o = 1;o < 4;++o){
         for(int p = 1;p < 11;++p){
          house[i][o][p] = 0;
         }
       }
     }
     cin >> n;
     for(int u = 0;u < n;++u){
        cin >> b >> c >> d >> f;
        house[b][c][d] += f;          
      } 
       for(int i = 1;i < 5;++i){
         if(i != 1){
           cout << "####################" << endl;
         }
        for(int o = 1;o < 4;++o){
         for(int p = 1;p < 11;++p){
          cout << " " << house[i][o][p];
          if(p == 10) cout << endl;
         }
       }
     }
  return 0;
}