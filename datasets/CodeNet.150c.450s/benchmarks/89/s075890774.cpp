#include <cstdio>
#include <iostream>
#include <string>
#define MAX 1000001
using namespace std;

int main(){
  int i,j,a,d,n;
  bool A[MAX];
  A[1] = A[0] = false;
  for(i=2;i<MAX;i++) A[i] = true;
  for(i=2;i<MAX;i++){
    if(A[i]){
      for(j=i*2;j<MAX;j+=i) A[j] = false;
    }
  }

  while(1){
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;
    int c = 0,ans;
    for(i=a;i<MAX;i+=d){
      if(A[i]) c++;
      if(c == n){
	ans = i;
	break;
      }
    }
    cout << i << endl;
  }
  return 0;
}