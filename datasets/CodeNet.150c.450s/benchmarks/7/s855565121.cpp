#include <iostream>
#include <stdio.h>
using namespace std;

void bsort(int m[]){
  for(int i=9;i>0;i--){
    for(int j=0;j<i;j++){
      if(m[j] < m[j+1]){
	int tmp = m[j];
	m[j] = m[j+1];
	m[j+1] = tmp;
      }
    }
  }
  
}

int main(){
  int i,mou[10];
  
  for(i=0;i<10;i++)  cin >> mou[i];

  bsort(mou);
  
  cout << mou[0] << endl << mou[1] << endl << mou[2] << endl;
  
  return 0;
}