#include <iostream>
using namespace std;
void k(int,int);
int m;
int main(){
  int e,i,j,k;
  while(1){
    m=10000000;
    cin >> e;
    if(e==0) break;
    for(i=0;i<=100;i++){
      for(j=0;j<=1000;j++){
	k=e-j*j-i*i*i;
        if(k>=0&&j>=0&&i>=0&&m>i+j+k){
	  m=i+j+k;
	}
      }
    }
    cout << m << endl;
  }
  return 0;
}