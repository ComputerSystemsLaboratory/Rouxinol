#include<iostream>
using namespace std;

// #include<cstdio>

int main(){
  int n, x, count=0;
  while(1){
    cin >> n >> x;
    if (n*n+x*x==0) break;
    for (int i=1; i<=n-2; i++){
      for (int j=i+1; j<=n-1; j++){
	for (int k=j+1; k<=n; k++){
	  if (i+j+k==x) count++;
	}
      }
    }
    cout << count << "\n";
    count = 0;
  }

  return 0;
}