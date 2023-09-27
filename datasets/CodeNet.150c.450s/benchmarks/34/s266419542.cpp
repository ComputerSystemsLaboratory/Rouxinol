#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n,A[40];
	queue<int> Q;
	A[0]=1;
	cin>>n;
	while(n !=0){
		for(int i=1;i<n+1;++i){
			A[i]=A[i-1];
			if(i>1){
				A[i]+=A[i-2];
			}
			if(i>2){
				A[i]+=A[i-3];
			}
		}
		A[n]=1+(A[n]-1)/3650;
		Q.push(A[n]);
		cin>>n;
	}
	while(Q.empty()==0){
		cout<<Q.front()<<endl;
		Q.pop();
	}
}