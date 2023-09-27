#include<iostream>
using namespace std;

int main(){
  int r,c,i,j,sumyoko=0,sumtate=0,sumzen=0;

  cin >> r >> c;
  int data[r][c];

  for ( i = 0; i < r ; i++){
    sumyoko = 0;
    for ( j = 0 ; j < c ; j++){
      cin >> data[i][j] ;
      sumyoko = sumyoko + data[i][j];
      sumzen = sumzen + data[i][j];
      cout << data[i][j] << " " ;
    }
    cout << sumyoko <<"\n";
  }

  for ( j = 0 ; j < c ; j++){
    sumtate = 0;
    for( i = 0  ; i < r ; i++){
      sumtate = sumtate + data[i][j];
    }
      cout << sumtate << " " ;
  }

  cout << sumzen <<endl;

 
  return 0;
}