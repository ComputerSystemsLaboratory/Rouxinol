#include<iostream>
#define N 10000
using namespace std;

int T[N+1],S[501];
int LinearSearch(int k, int n){
	T[n] = k;
	int i = 0;
	while(T[i] != k){
		i++;
	}
	return i != n;
}
int main(){
	int n,q,t,sum = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>T[i];
	}
	cin>>q;
	for(int i = 0; i < q; i++){
		cin>>t;if(LinearSearch(t, n))	sum++;
	}
	cout<<sum<<endl;
	return 0;
}
