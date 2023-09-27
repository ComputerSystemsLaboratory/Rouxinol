#include<iostream>
#include<numeric>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
int main(){
	int a[4],b[4];
	REP(i,4)cin>>a[i];
	REP(i,4)cin>>b[i];
	cout<<max(accumulate(a,a+4,0), accumulate(b,b+4,0))<<endl;
}