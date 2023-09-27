#include <iostream>
using namespace std;

int main(){
     int N;
     while(cin>>N,N){
	  int ans=0;
	  for(int i=1;i<1001;i++){
	       for(int j=i+1;j<1001;j++){
		    if(((i+j)*(j-i+1)/2)==N){
			 //cout<<i<<j<<endl;
			 ++ans;
		    }
	       }
	  }
	  cout<<ans<<endl;
     }
}