#include<bits/stdc++.h>
using namespace std;
#define BIG 1000000007
#define ll long long int

int main(){
  string s;
  int n,ans,p=1,m,c,x,i;
  cin>>n;
  for(int l=0;l<n;l++){
    ans=0;
    m=c=x=i=0;
    for(int j=0;j<2;j++){
      cin>>s;
      for(int k=0;k<s.size();k++){
	if('2'<=s[k] && s[k]<='9'){
	  p=atoi(&s[k]);
	  continue;
	}
	if(s[k]=='m'){
	  ans+=1000*p;
	  p=1;
	  continue;
	}
	if(s[k]=='c'){
	  ans+=100*p;
	  p=1;
	  continue;
	}

	if(s[k]=='x'){
	  ans+=10*p;
	  p=1;
	  continue;
	}

	if(s[k]=='i'){
	  ans+=p;
	  p=1;
	  continue;
	}
      }
    }
    i=ans%10;
    ans-=i;
    x=(ans%100)/10;
    ans-=x*10;
    c=(ans%1000)/100;
    ans-=c*100;
    m=ans/1000;
    if(m!=0 && m!=1) cout<<m;
    if(m!=0) cout<<'m';
    if(c!=0 && c!=1) cout<<c;
    if(c!=0) cout<<'c';
    if(x!=0 && x!=1) cout<<x;
    if(x!=0) cout<<'x';
    if(i!=0 && i!=1) cout<<i;
    if(i!=0) cout<<'i';
    cout<<endl;
  }
  return 0;
}

