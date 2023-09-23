#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Point{
public:
  short n,a;
};

int main(){
  int i,j,n,a[100];
  long long b[2][21];
  while(cin >> n){
    for(i=0;i<n;i++) cin >> a[i];

    for(i=0;i<=20;i++) b[0][i] = b[1][i] = 0;
    b[1][a[0]] = 1;

    for(i=1;i<n-1;i++){
      for(j=0;j<=20;j++){
	b[0][j] = b[1][j];
	b[1][j] = 0;
      }

      for(j=0;j<=20;j++){
	if(b[0][j] > 0){
	  int plus = j + a[i];
	  if(plus >= 0 && plus <= 20){
	    b[1][plus] += b[0][j];
	  }
	  int minus = j - a[i];
	  if(minus >= 0 && minus <= 20){
	    b[1][minus] += b[0][j];
	  }
	}
      }
    }

    cout << b[1][a[n-1]] << endl;

  }
  return 0;
}