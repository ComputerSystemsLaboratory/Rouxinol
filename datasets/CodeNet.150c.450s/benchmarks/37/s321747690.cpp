#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
 
using namespace std;

static int N = 2;
int pivot;


int main(){
    
    int i, j, k, n;
  
    // ?????§?????°?????? M
    double M[N][N + 1];
    while (cin >> M[0][0] >> M[0][1] >> M[0][2] >> M[1][0] >> M[1][1]>> M[1][2]){
    /*
    for (int i = 0; i < N; ++i){
        for(int j= 0; j < N+1; ++j){
            cin >> M[i][j];
        }
    }*/
    
  

 
    double pivot, mul;
 
    // ????§??????????1??§??£????????????????????????????????????(???????¶????)
    for (i = 0; i < N; ++i){
        // ????§??????????????????????????????§??????????????£??????
        pivot = M[i][i];
        for (j = 0; j < N + 1; ++j){
           M[i][j] = (1 / pivot) * M[i][j];
        }
 
    // ???????????????????????????????????¨?????????????????????????????????
    // i??????????????????0???????????????????????¬?????¢?????????
         for (k = i + 1; k < N; ++k){
            mul = M[k][i];
            for (n = i; n < N + 1; ++n){
                M[k][n] = M[k][n] -  mul * M[i][n];
            }
        }
    }
 
    // ???????????????????????£????????°?????£??\???????????¬??????????§£?????¢?????????(????????£??\)
    // ????????¨??????????????????????????§?????¬??????????§£???????????????
    for (i = N - 1; i > 0; --i){
        for (k = i - 1; k >= 0; --k){
            mul = M[k][i];
            for (n = i; n < N + 1; ++n){    
                M[k][n] = M[k][n] - mul * M[i][n];
            }
        }
    }
    cout << fixed << setprecision(3) << M[0][2] << " " << M[1][2] << endl; 
}}