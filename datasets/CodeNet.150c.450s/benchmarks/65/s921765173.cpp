#include<iostream>
using namespace std;
typedef struct{
  char mark;
  int value;
  int order;
}t;
  
int main(){
  int N,minj,f=0;
  t C1[36],C2[36],a;
  cin>>N;
 
  if(N>0 && N<37){
    for(int i=0;i<=N-1;i++){
      while(1){
      cin>>C1[i].mark;
      if(C1[i].mark!='D'&&C1[i].mark!='C'&&C1[i].mark!='S'&&C1[i].mark!='H')continue;	
      cin>>C1[i].value;
      break;
      }
      C1[i].order=i+1;
      C2[i]=C1[i];
    }
  
    for(int i=0;i<=N-1;i++)
      for(int j=N-1;j>=i+1;j--)
	if(C1[j].value < C1[j-1].value){
	  a=C1[j];
	  C1[j]=C1[j-1];
	  C1[j-1]=a;
	}	
  
    for(int i=0;i<N-1;i++) cout<<C1[i].mark<<C1[i].value<<' ';
    cout<<C1[N-1].mark<<C1[N-1].value<<endl;
  
    for(int i=0;i<=N-1;i++)
      if(C1[i].value==C1[i-1].value && C1[i].order-C1[i-1].order<0)f=1;
  
  if(f==0) cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
  f=0;
  
  for(int i=0;i<=N-1;i++){
    minj=i;
    for(int j=i;j<=N-1;j++)
      if(C2[j].value < C2[minj].value)minj=j;
    a=C2[i];
    C2[i]=C2[minj];
    C2[minj]=a;
  }
  for(int i=0;i<N-1;i++)cout<<C2[i].mark<<C2[i].value<<' ';
  cout<<C2[N-1].mark<<C2[N-1].value<<endl;
  for(int i=1;i<N;i++)
    if(C2[i].value==C2[i-1].value && C2[i].order-C2[i-1].order<0)f=1;
  if(f==0)cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
  }
  return 0;
}