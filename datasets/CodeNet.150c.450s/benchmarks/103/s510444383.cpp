#include<iostream>
#include<cstdio>
using namespace std;
int n,s,count;
 
int solve(int i,int sum,int used){
	if(i==10){
		if(s==sum&&used==n){
 
		count++;
		}
		return count;
	}
	solve(i+1,sum+i,used+1);
 
	solve(i+1,sum,used);
 
 
	return count;
}
 
int main(){
 
	while(cin>>n>>s,n||s){
	count=0;
 
	cout<<solve(0,0,0)<<endl;
	}
 
return 0;
}