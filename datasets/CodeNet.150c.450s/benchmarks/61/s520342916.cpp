#include <iostream>
#include <queue>
using namespace std;

int main(){
     int N,A,B,C,X;
     while(cin>>N>>A>>B>>C>>X,N||A||B||C||X){
	  queue<int> lists;
	  for(int i=0;i<N;i++){
	       int a;
	       cin>>a;
	       lists.push(a);
	  }
	  int ans=-1;
	  for(int i=0;i<10001;i++){
	       int t=lists.front();
	       if(X==t){
		    lists.pop();
	       }
	       if(lists.empty()){
		    ans=i;
		    break;
	       }
	       X=(A*X+B)%C;
	  }
	  cout<<ans<<endl;
     }
     return 0;
}