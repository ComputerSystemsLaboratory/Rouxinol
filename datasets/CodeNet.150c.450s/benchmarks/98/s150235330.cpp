#include <iostream>
using namespace std;

int N,M;
int taro[100];
int hana[100];

int main(){
  while(cin>>N>>M,N||M){
    for(int i=0;i<N;i++){
      cin>>taro[i];
    }
    for(int i=0;i<M;i++){
      cin>>hana[i];
    }
    int tsum=0,hsum=0;
    for(int i=0;i<N;i++)tsum+=taro[i];
    for(int i=0;i<M;i++)hsum+=hana[i];

    int a,b;
    int ansa,ansb;
    int anssum=100000;
  
    for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
	a=taro[i];
	b=hana[j];
	if(tsum-a+b==hsum-b+a){
	  if(a+b<anssum){
	    //cout<<"a:"<<a<<"b:"<<b<<endl;
	    ansa=a;
	    ansb=b;
	    anssum=a+b;
	  }
	}
      }
    }
    if(anssum==100000)cout<<-1<<endl;
    else cout<<ansa<<" "<<ansb<<endl;
  }
}
      