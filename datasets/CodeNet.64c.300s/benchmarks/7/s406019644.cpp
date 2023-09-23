#include <iostream>
using namespace std;

int main() {
 char x,l;
 int cards[4][13], y, z, n, j, k;
 cin >> n;
 for(j = 0; j < 4; j++) {
   for(k = 0; k < 13; k++) {
     cards[j][k] = 0;
   }
 }

 for(int i = 0; i < n; i++) {
   cin >> x >> y;
   if (x == 'S') z = 0;
   else if (x == 'H') z = 1;
   else if (x == 'C') z = 2;
   else z = 3;
   cards[z][y-1] = 1;
 }       
 for(j = 0; j < 4; j++) {
   for(k = 0; k < 13; k++) {
     if(cards[j][k] == 0) {
if (j == 0) l = 'S';
else if (j == 1) l = 'H';
else if (j == 2) l = 'C';
else l = 'D'; 
cout << l << " " << k + 1 << endl;
     }       
   }       
 }       
} 