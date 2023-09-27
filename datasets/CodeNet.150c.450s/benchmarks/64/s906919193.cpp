#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n,q,A[2005],Q[2005];
int solve(int i,int m){
	if(m==0){
		return 1;
	}
	if(i>=n){
		return 0;
	}
	int res=solve(i+1,m)||solve(i+1,m-A[i]);
	return res;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>Q[i];
		if(solve(0,Q[i])){
			printf("yes\n");
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
} 
