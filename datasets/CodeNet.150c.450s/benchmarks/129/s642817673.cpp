#include<iostream>
using namespace std;

int main(void){
   int r,c,sum;
   cin >> r >> c;
   int spread[100][100] = {{}};
   int sum1[100] = {};
   int sum2[100] = {};
   for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
         cin >> spread[i][j];
         sum1[i] += spread[i][j];
         sum2[j] += spread[i][j];
      }
   }
   for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
         cout << spread[i][j] << " ";
      }
      cout << sum1[i] << endl;
   }
   sum = 0;
   for (int k = 0; k < c; k++){
      cout << sum2[k] << " ";
      sum += sum2[k];
   }
   cout << sum << endl;
}

