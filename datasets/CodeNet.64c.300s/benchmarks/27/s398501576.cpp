#include<iostream>
using namespace std;
int main(){
	while(1){
	  int n, x;
	  int count=0;
	  cin >> n >> x;
	  if(n==0 && x==0){
	     break;
	  }
	  for(int i=1; i<n+1; i++){
	    for(int j=1; j<n+1; j++){
		if(j==i){
		  continue;
		}
	      for(int q=1; q<n+1; q++){
		if(q==i || q==j){
		  continue;
		}
		if(i+j+q==x){
		  count++;
		}
	      }
	    }
	  }
	cout << count/6 << endl;
	}
}
