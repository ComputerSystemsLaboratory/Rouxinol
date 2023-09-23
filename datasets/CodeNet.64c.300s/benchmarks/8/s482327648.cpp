#include<iostream>
using namespace std;

// #include<cstdio>

int main(){
  int n;

  cin >> n;

  for (int i=1; i<=n; i++){
    if (i%3==0){
      cout << ' ' << i;
      continue;
    }
    int x=i;
    while(x){
      if (x%10==3){
	cout << ' ' << i;
	break;
      }
      x /= 10;
    }
  }
  cout << "\n";

  return 0;
}