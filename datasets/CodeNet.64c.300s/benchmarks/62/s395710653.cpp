#include <iostream>

using namespace std;

int main(void){
   
   int height,width;
   

    cin >> height >> width;

   int A[height][width];
   int B[width];

   for(int i=0; i<height; i++){
      for(int j=0; j<width; j++){
        cin >> A[i][j];
      }
   }
   for(int i=0; i<width; i++)
        cin >> B[i];

   for(int i=0; i<height; i++){
      int calc = 0;

      for(int j=0; j<width; j++){
        calc += A[i][j] * B[j]; 
      }

      cout << calc << endl;
   }


   return 0;
}