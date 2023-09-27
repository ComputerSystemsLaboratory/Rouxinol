#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;

  while(cin >> n && n){
    int sum = 0;
    int cnt = 0, shokika = 0;
    for(int i = 1; i < n; i++){
      sum += i;
      //  cout << sum << endl;
      shokika++;
      if(sum == n){
	cnt++;
      }
      //  if(shokika)
      if(i + 1 == n){
	i = n - shokika; 
	shokika = 0;
	sum = 0;
	//	cout << i << endl;
      }
    }
     cout << cnt << endl;
     cnt = 0;
  }


  return 0;
}