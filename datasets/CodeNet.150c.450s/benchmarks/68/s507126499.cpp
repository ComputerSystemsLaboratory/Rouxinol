#include<bits/stdc++.h>
using namespace std;

int main(){
	
	while(1){
		int N, a[1000], min = 10000000;
		cin>>N;
		if(N == 0)break;
		for(int i = 0; i < N; i++){
			cin>>a[i];
		}
	
		for(int i = 0; i < N - 1; i++){
			for(int j = i + 1; j < N; j++){
				if(fabs(a[i] - a[j]) < min) min = fabs(a[i] - a[j]);
			}
		}
		cout<<min<<endl;
	}
	
	return 0;
}

