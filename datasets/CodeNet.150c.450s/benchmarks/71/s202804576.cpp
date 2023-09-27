#include <iostream>
using namespace std;

int main(){
  int s,n;
  while(cin>>n){
    s = 0;
    for(int i=9;i>=0;i--){
      if(n-i>27) break;
      for(int j=9;j>=0;j--){
	if(n-i-j>18) break;
	for(int k=9;k>=0;k--){
	  if(n-i-j-k>9) break;
	  if(n-i-j-k>=0) s++;
	}
      }
    }
     cout<<s<<endl;
  }
 
  return 0;
}