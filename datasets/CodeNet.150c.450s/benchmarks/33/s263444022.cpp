#include<iostream>
using namespace std;

int main(){
  int x,y,s,t[1000],k=0,max[1000];
  
  for(int i=0;i<1001;i++){
    t[i]=0;
  }

  for(;;){
    cin>>x>>y>>s;
    if(x+y+s==0){
      break;
    }
    k+=1;
    int a,b,A,B,C,D;
    for(a=1;s-a-a*x/100>0;a++){
      A=a+a*x/100;
      for(b=1;s-A-b-b*x/100>-1;b++);

      b-=1;
      B=b+b*x/100;
      if(A+B !=s){
	t[a]=0;
	continue;
      }

      C=a+a*y/100;
      D=b+b*y/100;
      t[a]=C+D;
    }
    int M=t[0];
    for(int i=0;i<a;i++){
      if(t[i]>M){
	M=t[i];
      }
    }
    max[k]=M;
  }
  for(int i=1;i<=k;i++){
    cout<<max[i]<<endl;
  }
}