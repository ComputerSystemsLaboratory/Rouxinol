#include<iostream>
using namespace std;

int main(){
   int num[5];
   int M1 = -2147483647, M2 = -2147483647, M3= -2147483647 , M4= -2147483647 , M5 = -2147483647;
   int I1 = 0, I2 = 0, I3= 0 , I4= 0 , I5 = 0 ;
   cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] ;

   for(int i=0 ; i < 5; i++){
      if(M1 < num[i]) {
          M1 = num[i];
          I1 = i;
       }
    }

    for(int i=0 ; i < 5; i++){
        if(i == I1 ) continue;
        if(M2 < num[i]) {
           M2 = num[i];
           I2 = i;
        }
     }

for(int i=0 ; i < 5; i++){
if(i == I1 || i == I2 ) continue;
if(M3 < num[i]) {
M3 = num[i];
I3 = i;
}
}

for(int i=0 ; i < 5; i++){
if( i == I1 || i == I2 || i == I3 ) continue;
if(M4 < num[i]) {
M4 = num[i];
I4 = i;
}
}

for(int i=0 ; i < 5; i++){
if( i == I1 || i == I2 || i == I3 || i == I4 ) continue;
if(M5 < num[i]) {
M5 = num[i];
I5 = i;
}
}

cout << M1 << " " << M2 << " " << M3 << " " << M4 << " " << M5 << endl;

return 0 ;
}