#include<bits/stdc++.h>
using namespace std;

int foo(long long a){
	long long i;
	if(a == 1)return 0;
	if(a == 2)return 1;
	if(a%2 == 0) return 0;
	for(i = 3; i * i <= a; i+=2){//cout<<a<<" "<<i<<endl;
		if(a%i == 0) return 0;
	}//cin>>i;
	return 1;
}

int main(){
	long long a, d, n, i, j, k, count, A;
	while(1){
		cin>>a>>d>>n;
		
		if(a == 0 && d == 0 && n == 0) break;
		
		
		//for(int i = 1; i < 100; i++)if(foo(i))cout<<i<<endl;
		A = a; count = 0;
		while(1){//cout<<count<<" "<<A<<" "<<foo(A)<<endl;
			if(foo(A)) count++;
			if(count == n) break;
			A += d;
		}
		
		cout<<A<<endl;
	}
	return 0;
}
