#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int e;
  while(cin >> e,e){
    int x,y,z;
    int m = 10000;
    for(int i=0; i*i*i<=e; ++i){
      for(int j=0; j*j<=e-(i*i*i); ++j){
	int k = e - j*j - i*i*i;
	    m = min(m,i+j+k);
	    
      }
    }
    cout << m << endl;
  }
  return 0;
}
	    
	    
	    

