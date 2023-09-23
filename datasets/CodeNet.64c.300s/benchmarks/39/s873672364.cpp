#include<iostream>

using namespace std;

int main(){
  int n,sum[50]={0},i=0;
  while(cin >> n){
    if(n >= 37){
      sum[i] = 0;
      i++;
    }
    else{
      for(int a = 0; a <= 9; a++){
	for(int b = 0; b <= 9; b++){
	  for(int c = 0; c <= 9; c++){
	    for(int d = 0; d <= 9; d++){
	      if(a+b+c+d == n) sum[i]++;
	    }	    
	  }
	}
      }
      i++;
    }
    cout << sum[i-1] << endl;
  }
  int j;
  // for(j = 0; j <= i; j++) cout << sum[j] << endl;
}