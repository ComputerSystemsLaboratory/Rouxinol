#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

long long Fib(int n){
	vector<long long> F(n+1);
	int i;
	F[0]=1;
	F[1]=1;
	for (i=2;i<=n;i++){
		F[i]=F[i-1]+F[i-2];
	}
	return F[n];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	cout << Fib(n)<<endl;
	return 0;
}