#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 1001000
bool p[MAX];
int main(){
  memset(p, true, sizeof(p));
  
  p[0] = p[1] = false;
  
  for(int i = 0 ; i < MAX ; i++){
    if(p[i]){
      for(int j = 2 * i ; j < MAX ; j += i){
	p[j] = false;
      }
    }
  }
  
  int a, d, n;
  while(cin >> a >> d >> n){
    if(a == 0 && d == 0 && n == 0) break;
    int cnt = 0;
    
    while(true){
      if(p[a]) cnt++;
      if(n == cnt) break;
      a += d;
    }
 
    cout << a << endl;
  }
  return 0;
}



    