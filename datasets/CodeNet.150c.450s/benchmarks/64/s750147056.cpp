#include <iostream>
#include <algorithm>
using namespace std;
int a[100];
int b[300];
int n;
bool solve(int i,int m){
	if(m==0){
		return true;
	}
	if(i>=n){
		return false;
	}
	bool re=(solve(i+1,m)||solve(i+1,m-a[i]));
	return re;
}

int main(){
	int m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>b[i];
	} 
	for(int i=0;i<q;i++){
		if(solve(0,b[i])){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}