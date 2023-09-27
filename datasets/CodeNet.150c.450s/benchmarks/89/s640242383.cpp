#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int cnt, a, b, x;
  int MAX = 1000000;

  vector<bool> num(MAX);

  for(int i=0; i<MAX; i++) num[i] = true;
  num[0] = false;
  num[1] = false;

  for(int i=2; i<sqrt(MAX); i++){
    if(num[i]){
      for(int j=i*2; j<MAX; j+=i){
	num[j] = false;
      }
    }
  }

  while(true){
    cnt=0;
    cin >> a;
    cin >> b;
    cin >> x;
    if((a|b|x) == 0) break;
    
    for(int i=a; i<MAX; i+=b){
      if(num[i]) cnt++;
      if(cnt == x){
	cout << i << endl;
	break;
      } 
    }
  }

  return 0;
}