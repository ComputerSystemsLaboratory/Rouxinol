#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
int main(){
	bool present[30]={false};
	int a;
	REP(i,28){
		cin>>a;
		present[a-1]=true;
	}
	a=find(present,present+30,false)-present;
	cout<<a+1<<endl;
	a=find(present+a+1,present+30,false)-present;
	cout<<a+1<<endl;
}