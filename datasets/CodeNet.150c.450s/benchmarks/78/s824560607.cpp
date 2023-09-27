#include<iostream>
#include<algorithm>
using namespace std;

int i,j,n,three[1000000],four[1000000],four_2[1000000],c[1000000],c_2[1000000];

int main(){
  
  three[0] = 1;
  four[0] = 1;
  for( i = 1; i < 1000000; i++ )three[i] = i+1 + three[i-1];
  for( i = 1; i < 1000000; i++ )four[i] = three[i] + four[i-1];
  
  int k = 0;
  for( i = 0; i < 1000000; i++ ){
    if(four[i] %2 == 1 ){
      four_2[k] = four[i];
      k++;
    }
  }
  
  for( i = 0; i < 1000000; i++ ){
    c[i] = 2000000;
    c_2[i] = 2000000;
  }

  c[0] = 0;
  for( i = 0; i < 1000; i++ ){
    for( j = four[i]; j <= 1000000; j++ ){
      c[j] = min( c[j],c[j-four[i]] + 1 );
    }
  }

  c_2[0] = 0;
  for( i = 0; i < 1000; i++ ){
    for ( j = four_2[i]; j <= 1000000; j++ ){
      c_2[j] = min( c_2[j],c_2[j-four_2[i]] + 1 );
    }
  }
  
  while(1){
    int n; cin >> n;
    if(n==0)break;
   
    cout << c[n] << " " << c_2[n] << endl;
  }
  return 0;
}
  