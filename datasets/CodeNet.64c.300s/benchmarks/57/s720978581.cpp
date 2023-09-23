#include<iostream>
#include<algorithm>
using namespace std;
const int Rmax = 10;
const int Cmax = 10000;
int A[Rmax][Cmax];
int R,C;

int main(){
  while(true){
    cin >> R >> C;
    if(R==0&&C==0) break;
    for(int i=0; i<R; i++){
      for(int j=0; j<C; j++){
        cin >> A[i][j];
      }
    }

    int ans = 0;
    for(int i=0; i<(1<<R); i++){
      int column[Cmax];
      for(int k=0; k<C; k++) column[k] = 0;
      for(int j=0; j<R; j++){
        for(int k=0; k<C; k++){
          column[k] += (i>>j)%2 ? A[j][k] : (1-A[j][k]);
        }
      }
      int sum = 0;
      for(int k=0; k<C; k++){
        //cout << column[k] << " ";
        sum += max(column[k], R-column[k]);
      }
      //cout << endl;
      ans = max(ans, sum);
    }

    cout << ans << endl;
  }

  return 0;
}