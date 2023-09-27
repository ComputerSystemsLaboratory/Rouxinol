#include<iostream>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
int main(){
  int n;
  int m=100000;
  cin>>n;
  rep(i,n){
    m*=1.05;
	if(m%1000)m+=1000;
	m-=m%1000;
  }
  cout<<m<<endl;
}
  