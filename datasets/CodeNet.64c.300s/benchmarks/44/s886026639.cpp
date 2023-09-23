#include<iostream>
using namespace std;

const int INF = 1000000;

int main(){

    int n;
    while(1){
      cin >> n;
      if(n==0){
        break;
      }
      int table[10][10];

      bool realtowntable[10];

      for(int i=0;i<10;i++){
        realtowntable[i] = false;
      }

      for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
          if(i==j){
            table[i][j] = 0;
          }
          else{
            table[i][j] = INF;
          }
        }
      }
      int a,b,c;
      for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(!realtowntable[a]){
          realtowntable[a] = true;
        }
        if(!realtowntable[b]){
          realtowntable[b] = true;
        }
        table[a][b] = table[b][a] = c;
      }

      for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
          for(int j=0;j<10;j++){
            if(table[i][j] > table[i][k] + table[k][j]){
              table[i][j] = table[i][k] + table[k][j];
            }
          }
        }
      }

      for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
          for(int j=0;j<10;j++){
            if(table[j][i] > table[j][k] + table[k][i]){
              table[j][i] = table[j][k] + table[k][i];
            }
          }
        }
      }

      int anstown = 0;
      long long int ans=0,tmp=0;
      ans = INF * 12;
      for(int i=0;i<10;i++){
        if(realtowntable[i]){
          tmp = 0;
          for(int j=0;j<10;j++){
            if(realtowntable[j]){
              tmp += table[i][j];
            }
          }
          if(ans > tmp){
            ans = tmp;
            anstown = i;
          }
        }
      }
      cout << anstown << ' ' << ans << endl;

    }


    return 0;
}