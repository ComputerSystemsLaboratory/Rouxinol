#include <bits/stdc++.h>
using namespace std;

int main(){

  while(1){

    int n, p, cnt = 0, win, sum = 0;
    int human[51] = {0};

    cin >> n >> p;
    if(n == 0 && p == 0) break;

    while(1){
      cnt = 0;
      if(p == 0){
	for(int i = 0; i < n; i++){
	  if(human[i] == 0){
	    cnt++;
	  }else if(human[i] != 0) win = i;
	}
	if(cnt == n - 1){
	  cout << win << endl;
	  break;
	}else {
	  //cout << "B";
	  p = human[sum];
	  human[sum] = 0;
	  sum++;
	  cnt = 0;
	  if(sum > n - 1) sum = 0;
	}
      }else {
	p -= 1;
	//cout << "A";
	human[sum] += 1;
	sum++;
	if(sum > n - 1) sum = 0;
      }
    }
  }
  return 0;
}