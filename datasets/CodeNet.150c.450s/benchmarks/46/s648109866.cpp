#include <iostream>
using namespace std;

int main(){
  int c;
  while(1){
    c = 0;
    int n,x;
    cin >> n >> x;
    cin.ignore();
    if((n == 0)&&(x == 0)){
      break;
    }else{
      for(int i=1;i<=n;i++){
	for (int j=i+1;j<=n;j++){
	  for(int k=j+1;k<=n;k++){
	    if(i+j+k == x){
	      c = c +1;
	    }
	  }
	}
      }
      cout << c << endl;
    }
  }
  return 0;
} 

