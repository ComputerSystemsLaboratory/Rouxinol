#include <iostream>
using namespace std;
int main(){
  int n,p,i,m,a=0,I;
  int box[100]={};
  while(1){
    cin>>n>>p;
    a=0;
    if(n==0&&p==0) break;
    else{
      while(1){

	for(i=0;i<n;i++){
	  m=i;
	 
	  if(p>0){
	    box[m]+=1;
	    p-=1;
	  }
	  else if(p==0){
	    for(I=0;I<n;I++){
	      if(box[I]==0) a++;
	    }
	    if(a==n-1) {
	      break;
	    }
	    else {
	      p=box[m];
	      box[m]=0;
	      a=0;
	    }
	  }
	}
	if(a==n-1) break;
      }
      if(m-1<0){
	m=n;
      }
      cout<<m-1<<endl;
          } 
    for(i=0;i<n;i++){
      box[i]=0;
    }
  }
  return 0;
}