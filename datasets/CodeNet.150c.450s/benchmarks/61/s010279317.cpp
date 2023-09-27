#include<iostream>
using namespace std;

int main(){
  while(1){
    int N,A,B,C,X;
    cin>>N>>A>>B>>C>>X;
    if(N+A+B+C+X==0) break;
    int y;
    int cou=0,f=0;
    for(int i=0;i<N;i++){
      cin>>y;
      while(1){
	if(cou>10000 || cou==-1){
	  cou=-1;
	  break;
	}
	if(cou==0 && X==y && f==0){
	  f=1;
	  break;
	}
	  X=(A*X+B)%C;
	  cou++;
	  
	  if(X==y){
	    if(cou>10000){
	  cou=-1;
	    }
	    break;
	  }
      }
    }
    cout<<cou<<endl;
  }
  return 0;
}
  