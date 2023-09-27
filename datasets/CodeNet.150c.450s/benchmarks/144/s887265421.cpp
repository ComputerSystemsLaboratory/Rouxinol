#include<iostream>
#include<cmath>
#include<vector>
#include<limits.h>


using namespace std;

int main(){

  int n=0,m=0,l=0,term=0;
int matrix_a[120][120]={};
int matrix_b[120][120]={};
long  int matrix_c[120][120]={0};

//cout << INT_MAX << endl;

    cin >> n >> m >> l;
/*    if(n >= 100 || m >= 100 || l >=100 ){
      //cout  << "Too Large" << endl;
      return 0;
}*/

//cout << INT_MAX << endl;

  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
      cin >> matrix_a[i][j];                   //??????????´?
    }
  }

  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<l ; j++){
      cin >> matrix_b[i][j];                   //??????????´?
    }
  }


  for (int i = 0 ; i < n ; i++) {
         for (int j = 0 ; j < l ; j++) {
             // Multiply the row of A by the column of B to get the row, column of product.
             for (int k = 0 ; k < m ; k++) {
                 matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
             }

         }
     }



  /* ??????????????????????????? */
/*    for(int i=0; i<n; ++i){
      for(int j=0; j<l ; ++j){
        matrix_c[i][j] = matrix_a[i][j] * matrix_b[i][j];

        // ????????????????¨????
        for(int i=0;i<n;i++){
          for(int j=0 ; j<l ; j++){
             term = 0;
            for(int k=0 ; k<m ; k++)
              term = term + matrix_a[i][k] * matrix_b[k][j];
            matrix_c[i][j] = term;
          }
        }

      }
    }
*/
    for(int i=0;i<n;i++){
      for(int j=0;j<l;j++){
        if(j==0){
            cout << matrix_c[i][j];                        //?????????????????????????????¨???
          }
          else{
            cout << ' ' << matrix_c[i][j];                //????????\??????????????¨???
          }
        }
        cout << endl;
    }
    return 0;



}