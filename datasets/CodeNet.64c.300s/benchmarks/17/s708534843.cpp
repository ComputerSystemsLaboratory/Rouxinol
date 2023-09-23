#include<iostream>

using namespace std;

int func(int a, int x){
  return a+(a*x/100);
}

int main(void){

  int x,y,s;
  while(cin >> x >> y >> s, x|y|s){

    int ans=0;
    
    for(int i=1;i<1000;i++){
      for(int j=1;j<1000;j++){
	if(func(i,x)+func(j,x)==s){
	  ans = max(ans, func(i,y) + func(j,y));
	}
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}