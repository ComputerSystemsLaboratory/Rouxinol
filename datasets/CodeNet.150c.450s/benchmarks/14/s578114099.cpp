#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
  int copy,n;
  cin >>n;
  for(int i=1;i<=n;i++){
	  if(i%3==0){
		cout << " " << i;
		continue; 
	  }
	  copy=i;
	  while(1){
		  if (copy%10==3){
			  cout << " " << i;
			  break;
		  }
		  copy/=10;
		  if(copy!=0)
			  continue;
		  else
			  break;
	  }
  }
  cout << endl;
  return 0;
}