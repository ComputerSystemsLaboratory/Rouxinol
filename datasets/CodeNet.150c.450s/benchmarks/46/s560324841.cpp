#include <iostream>

using namespace std;

int main(void)
{
  int n, x;
  int flag;
  int i, j, k;
  while(1){
    flag = 0;
    cin >> n >> x;
    if(n+x == 0) break;
    for(i = 1; i <= n; i++){
      for(j = i+1; j <= n; j++){
	for(k = j+1; k <= n; k++){
	  if(i+j+k == x){
	    flag += 1;
	  }
	}
      }
    }
    cout << flag << '\n';
  }
}


	    
  