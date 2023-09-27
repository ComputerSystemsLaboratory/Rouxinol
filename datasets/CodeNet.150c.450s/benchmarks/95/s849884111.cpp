#include<bits/stdc++.h>
using namespace std;

int main(){
  int i, j, k;
  int  n, v,  x, y, z, count;
  string s;

  while(1){
    x = 0; y = 0; z = 1, v = 0; count = 0;
    cin>>n;

    if(n == 0) break;

    for(i = 0; i < n; i++){
      cin>>s;
      if(s[0] == 'l'){
	if(s[1] == 'u'){
	  x = 1;
	} else{
	  x = 0;
	}
      } else if(s[0] == 'r'){
	if(s[1] == 'u'){
	  y = 1;
	} else{
	  y = 0;
	}
      }

      if(v == 1 &&x == 0 && y == 0 ){ count++;}
      if(v == 0 &&x == 1 && y == 1 ){ count++;}

	if(x == 1 && y == 1){
	  v = 1;
	}
	if(x == 0 && y == 0){
	  v = 0;
	}
      }

      
   
      cout<<count<<endl;
  }
  
  return 0;
}

