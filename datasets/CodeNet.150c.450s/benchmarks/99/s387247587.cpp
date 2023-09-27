#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  int i,j;
  int n;
  cin>>n;
  rep(i,n){
    string s1,s2;
    cin>>s1>>s2;
    int n1=0,n2=0;
    rep(j,s1.size()){
      if('0'<=s1[j] && s1[j]<='9'){
	int a=s1[j]-'0';
	if(s1[j+1]=='m')n1+=a*1000;
	else if(s1[j+1]=='c')n1+=a*100;
	else if(s1[j+1]=='x')n1+=a*10;
	else if(s1[j+1]=='i')n1+=a;
	j++;
      }else{
	if(s1[j]=='m')n1+=1000;
	else if(s1[j]=='c')n1+=100;
	else if(s1[j]=='x')n1+=10;
	else if(s1[j]=='i')n1+=1;
      }
    }
    rep(j,s2.size()){
      if('0'<=s2[j] && s2[j]<='9'){
	int a=s2[j]-'0';
	if(s2[j+1]=='m')n2+=a*1000;
	else if(s2[j+1]=='c')n2+=a*100;
	else if(s2[j+1]=='x')n2+=a*10;
	else if(s2[j+1]=='i')n2+=a;
	j++;
      }else{
	if(s2[j]=='m')n2+=1000;
	else if(s2[j]=='c')n2+=100;
	else if(s2[j]=='x')n2+=10;
	else if(s2[j]=='i')n2+=1;
      }
    }
    int sum=n1+n2;
    int m,c,x,i;
    i=sum%10;    sum/=10;
    x=sum%10;    sum/=10;
    c=sum%10;    sum/=10;
    m=sum%10;

    if(m>1)cout<<m<<"m";
    else if(m==1)cout<<"m";

    if(c>1)cout<<c<<"c";
    else if(c==1)cout<<"c";

    if(x>1)cout<<x<<"x";
    else if(x==1)cout<<"x";

    if(i>1)cout<<i<<"i";
    else if(i==1)cout<<"i";

    cout<<endl;
  }
}