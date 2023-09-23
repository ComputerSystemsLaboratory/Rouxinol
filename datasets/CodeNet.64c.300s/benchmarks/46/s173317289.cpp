#include <bits/stdc++.h>
using namespace std;

int main(){

  int a, b, n;
  bool sosu[1000000] = {};
  sosu[0] = true;
  sosu[1] = true;
  for(int i = 2; i < 1000000; i++){
    if(!sosu[i]){
      for(int j = i+i; j < 1000000; j+=i){
	sosu[j] = true;
      }
    }
  }

  while(cin >> a >> b >> n && (a || b || n)){

    int cnt = 0, judge = 0; 

    for(int i = a; i < 1000000; i+=b){
      if(!sosu[i]) cnt++;
      if(cnt == n){
	cout << i << endl;
	break;
      }
    }


    }



  

  return 0;
}