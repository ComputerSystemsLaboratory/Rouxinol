#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  while(n--){
    int y,m,d;
    cin >> y >> m >> d;
    int sum = 0;
    for(int i=y;i<1000;i++){
      if(i == y){
	if(i%3 == 0){
	  sum += 21 - d;
	  sum += (10-m)*20;
	}
	else {
	  for(int j=m;j<=10;j++){
	    if(j == m) sum += 1 - d;
	    if(j%2 == 1) sum += 20;
	    else sum += 19;
	  }
	}
      }
      else if(i % 3 == 0) {
	sum += 10*20;
      }
      else {
	for(int j=1;j<=10;j++){
	  if(j%2 == 1) sum += 20;
	  else sum += 19;
	}
      }
    }
    cout << sum << endl;
  }
}