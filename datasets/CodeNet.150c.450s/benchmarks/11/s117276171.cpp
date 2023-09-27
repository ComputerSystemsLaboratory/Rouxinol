#include<iostream>
using namespace std;
 
int main(){
 int n,i,j,rank;
 int cards[4][14];
 char type;
 
 cin >> n;
 
 for(i = 0; i < 4; i++){
  for(j = 1; j <= 13; j++){
   cards[i][j] = 0;
  }
 }
 
 for(i = 0; i < n; i++){
  cin >> type >> rank;
   
   if(type == 'S') cards[0][rank] = 1;
   if(type == 'H') cards[1][rank] = 1;
   if(type == 'C') cards[2][rank] = 1;
   if(type == 'D') cards[3][rank] = 1;
 }
 
 for(i = 0; i < 4; i++){
  for(j = 1; j <= 13; j++){
   if(cards[i][j] == 0){
     if(i == 0)
      cout << 'S' << " " << j << endl;
     if(i == 1)
      cout << 'H' << " " << j << endl;
     if(i == 2)
      cout << 'C' << " " << j << endl;
     if(i == 3)
      cout << 'D' << " " << j << endl;
   }
  }
 }
 
 return 0;
}