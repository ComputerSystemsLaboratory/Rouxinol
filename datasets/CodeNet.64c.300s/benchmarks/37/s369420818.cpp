#include<bits/stdc++.h>
using namespace std;

int foo(int A, int j){
	int s = 0, count = 0;
	for(int i = j; s < A; i++){
		s += i;
		count++;
	}
	if(A == s && count >= 2) return 1;
	else return 0;	
}

int main(){
	while(1){
		int N, s = 0, i, j, c = 0;
		cin>>N;
		if(N == 0) break;
		
		for(j = 1; j < N; j++){
			if(foo(N, j) == 1) c++;
		}
		cout<<c<<endl;
	}
	return 0;
}

