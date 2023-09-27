#include <iostream>
using namespace std;

int main(){
     int r, c, i, j, allsum = 0;
     cin >> r >>c;
     int mat[r*c], rsum[r], csum[c];
     for(i = 0; i <= r*c-1; i++){
          cin >> mat[i];
     }

     for(i = 0; i <= r-1; i++){
          rsum[i] = 0;
          for(j = 0; j <= c-1; j++){
               rsum[i] += mat[c*i+j];
          }
     }

     for(i = 0; i <= c-1; i++){
          csum[i] = 0;
          for(j = 0; j <= r-1; j++){
               csum[i] += mat[c*j+i];
          }
     }

     for(i = 0; i <= r-1; i++){
          allsum += rsum[i];
     }

     for(i = 0; i <= r*c-1; i++){
          cout << mat[i] << ' ';
          if((i+1)%c == 0){
               cout << rsum[(i+1)/c-1] << endl;
          }
     }
     for(i = 0; i <= c-1; i++){
          cout << csum[i] << ' ';
     }
     cout << allsum << endl;

     return 0;
}