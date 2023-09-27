#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(void)
{
  int n;
  while(cin >> n)
    {
      if(n ==0 ) break;
      int counter = 0;
      for(int i = 1; i <= n/2; i++){
	int sum = 0;
	int j = i;
	
	while(1){
	  sum += j;
	  if(sum == n){
	    counter++;
	    break;
	  }
	  if(sum > n){
	    break;
	  }
	  j++;
	}

      }

      cout << counter << endl;

    }

  return 0;
}