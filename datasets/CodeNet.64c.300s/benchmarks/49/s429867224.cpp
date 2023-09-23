#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b;

  while(scanf("%d%d",&a,&b) != EOF)
    {
      int cnt = 0;
      int sum = a + b;
      
      while(1)
	{ 
	  sum /= 10;
	  cnt++;
	  if(!sum) break;
	}
      cout << cnt << endl;
    }
  return 0;
}

