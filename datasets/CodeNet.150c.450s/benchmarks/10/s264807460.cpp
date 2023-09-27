#include<iostream>
using namespace std;

int main(){
 int b,r,f,v,n,i;
 int house[5][4][11];
 cin >> n;

 for(int s = 0; s < 5; s++)
  for(int t = 0; t < 4; t++)
   for(int r = 0; r < 11; r++)
    house[s][t][r] = 0;

 for(i = 0; i < n; i++){
  cin >> b >> r >> f >> v;
  
  house[b][r][f] += v;
 }

 for(int s = 1; s <= 4; s++){
  for(int t = 1; t <= 3; t++){
   for(int r = 1; r <= 10; r++){
    cout << " " << house[s][t][r] ;
   }
   cout << "\n";
  }
  
  if(s != 4)
   cout << "####################\n" ;
 }

 return 0;
}
 
 