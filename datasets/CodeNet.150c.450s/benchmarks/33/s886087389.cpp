#include <iostream>
using namespace std;
int main(){
  int i,x,y,I,s,v;
  int box[2000];
  int array[2000];
  while(1){
    for(i=0;i<2000;i++){
      box[i]=0;
      array[i]=0;
	    }
	cin>>x>>y>>s;
      if(x==0&&y==0&&s==0) break;
      for(i=1;i<=s;i++){
	for(I=1;I<=s;I++){
	  v=i*x/100+I*x/100+i+I;
	 
	  if(s==v) {
	    box[i]=i;
	    array[i]=I;
	  
	  }
	}
      }
      int max=0,P;
      for(i=1;i<=s;i++){
	P=box[i]*y/100+array[i]*y/100+box[i]+array[i];
	
	if(max<P) max=P;

      }

      cout<<max<<endl;
    }
  
    return 0;
}