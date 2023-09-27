#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,p;
  
  while(1)
    {
      cin >> n >> p;
      if(n + p == 0) break;
      
      int man[n];
      for(int i=0;i < n;i++)
	{
	  man[i] = 0;
	}
      int stone = p;
      int i=0;

      while(1){
	
	if(stone == 0 && man[i] == 0)
	  {
	    i++;
	  }
	else if(stone == 0 && man[i] != 0)
	  {
	    stone = man[i];
	    man[i] = 0;
	    i++;
	  }
	else if(stone != 0)
	  {
	    man[i]++;
	    stone--;
	    i++;
	  }
	
	if(i == n) i = 0;

	if(man[i] == p)
	  {
	    cout << i << endl;
	    break;
	  }
      }
    }
  return 0;
}

