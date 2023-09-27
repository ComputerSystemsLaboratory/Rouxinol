
#include<iostream>
using namespace std;

int main()
{
  int N,M,P,X,S,i,m;
  while(cin>>N>>M>>P,N||M||P){
    S=0;
    for(i=0;i<N;i++){
      cin>>X;
      S+=X*100;
      if(i==M-1)m=X*100;
    }
    S*=100-P;
    if(m)cout<<(int)((double)S/m)<<endl;
    else puts("0");
  }
}