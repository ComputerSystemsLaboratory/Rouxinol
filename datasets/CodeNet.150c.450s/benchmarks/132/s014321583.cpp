#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int n, p;
  
  while(cin >> n >> p){
    if(n == 0 && p == 0) break;
    
    vector<int> array(n, 0);
    int m = p;
    
    int index = 1;
      while(1){
	
	if(p > 0){
	  array[index]++;
	  p--;
	  if(array[index] == m) break;
	}else{
	  p += array[index];
	  array[index] = 0;
	}
	if(index == n-1) index = 0;
	else index++;
      }
    if(index == 0) cout << n - 1 << endl;
    else cout << index - 1 << endl;
  }  
  
  return 0;
}

  