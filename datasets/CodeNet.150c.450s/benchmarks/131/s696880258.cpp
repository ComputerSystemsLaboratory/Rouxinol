#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;
 
string Hen(int N)
{
  string S;
  char s;
  while(N!=0){
    s='0'-N%10;
    S.insert(S.begin(),s);
    N/=10;
  }
  return S;
}
int main()
{
  string S,T[40];
  int L,N,M,j,len,flag;
  while(1){
    cin>>S>>L;
    if(S[0]=='0'&&L==0)break;
    len=S.length();flag=0;
    if(S.length()<L){
      for(int i=0;i<L-len;i++){
	S.insert(S.begin(),'0');
      }
    }
    T[0]=S;
    for(int i=1;i<21;i++){
      sort(S.begin(),S.end());
      N=atoi(S.c_str());
      reverse(S.begin(),S.end());
      M=atoi(S.c_str());
      S=Hen(N-M);
      len=S.length();
      if(S.length()<L){
	for(int j=0;j<L-len;j++){
	  S.insert(S.begin(),'0');
	}
      }
      T[i]=S;
    }
     for(int i=1;i<21;i++){
       for(int j=0;j<i;j++){
	 if(T[i]==T[j]){
	   cout<<j<<" "<<atoi(T[i].c_str())<<" "<<i-j<<endl;
	   flag=1;
	   break;
	 }
       }
       if(flag==1)break;
     }
  }
  return 0;
}