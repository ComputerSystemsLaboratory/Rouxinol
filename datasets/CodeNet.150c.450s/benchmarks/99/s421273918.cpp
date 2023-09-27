#include <iostream>
using namespace std;

char list1[4]={'m','c','x','i'};
int list2[4]={1000,100,10,1};

string tomcxi(int a){
     string tmp;
     for(int i=0;i<4;i++){
	  if(a/list2[i]>1)tmp+=(a/list2[i])+'0';
	  if(a/list2[i]>0)tmp+=list1[i];
	  a-=list2[i]*(a/list2[i]);
     }
     return tmp;
}

int toint(string a){
     int t=1;
     int sum=0;
     for(int i=0;i<a.size();i++){
	  switch(a[i]){
	  case 'm':
	       sum+=t*1000;
	       t=1;
	       break;
	  case 'c':
	       sum+=t*100;
	       t=1;
	       break;
	  case 'x':
	       sum+=t*10;
	       t=1;
	       break;
	  case 'i':
	       sum+=t;
	       t=1;
	       break;
	  default:
	       t=a[i]-'0';
	       break;
	  }
     }
     return sum;
}

int main(){
     int N;
     cin>>N;
     for(int i=0;i<N;i++){
	  string a,b;
	  cin>>a>>b;
	  //cout<<toint(a)+toint(b)<<endl;
	  cout<<tomcxi(toint(a)+toint(b))<<endl;
     }
}