//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2149


#include <iostream>
//#include <list>
using namespace std;

int main(){

  int n,a,b,c,x;
  int m=0;
  int count=0;
  while(1){
    count=0;
    m=0;

    cin>>n>>a>>b>>c>>x;
    if(n==0 && a==0 && b==0 && c==0 && x==0)
      break;
     
 
    int arrayY[n];
    for(int i=0;i<n;i++){
      cin>>arrayY[i];
    }

    for(int i=0;i<10002;i++){
      if(i>10000){
	cout<<-1<<endl;
	break;
      }
      if(arrayY[m]==x){
	if(m<n-1){
	  m++;
	}
	else if(m==n-1){
	  cout<< i<<endl;
	  break;
	}
      }
      x=(a*x+b)%c;
    }
    //if(count>10000)
    //cout<<-1<<endl;
  }
  //    cout<<-1<<endl;
    return 0;

  
}