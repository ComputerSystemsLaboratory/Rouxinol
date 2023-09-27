#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string str,str2;
    cin>>str>>str2;
    int a=0,b=0;
    int num=1;
    for(int j=0;j<str.size();j++){
      if(str[j]>='0'&&str[j]<='9')num=str[j]-'0';
      else{
	switch(str[j]){
	case 'm':a+=1000*num;num=1;break;
	case 'c':a+=100*num;num=1;break;
	case 'x':a+=10*num;num=1;break;
	case 'i':a+=num;num=1;break;
	}
	num=1;
      }
    }
    num=1;
    for(int j=0;j<str2.size();j++){
      if(str2[j]>='0'&&str2[j]<='9')num=str2[j]-'0';
      else{
	switch(str2[j]){
	case 'm':b+=1000*num;num=1;break;
	case 'c':b+=100*num;num=1;break;
	case 'x':b+=10*num;num=1;break;
	case 'i':b+=num;num=1;break;
	}
	num=1;
      }
    }
    int c=a+b;
    while(c>0){
      if(c/1000>0){
	if(c/1000==1)
	  cout<<'m';
	else{
	  cout<<c/1000<<'m';
	}
	c=c%1000;
      }else if(c/100>0){
	if(c/100==1)
	  cout<<"c";
	else
	  cout<<c/100<<'c';
	c=c%100;
      }else if(c/10>0){
	if(c/10==1)
	  cout<<'x';
	else
	  cout<<c/10<<'x';
	c=c%10;
      }else if(c>0){
	if(c==1)
	  cout<<'i';
	else
	  cout<<c<<'i';
	c=0;
      }
    }
    cout<<endl;
  }
  return 0;
}