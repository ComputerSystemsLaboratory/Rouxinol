#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, M, P, x;
	
	while(1){
		int temp = 0, sum = 0;
		cin>>N>>M>>P;
		
		if(N == 0 && M == 0 && P == 0) break;
		
		for(int i = 1; i <= N; i++){
			cin>>x;
			sum += x;
			if(M == i) temp = x;
		}
		
		sum *= 100;
		sum = sum - sum * (P/100.0);
		
		if(temp)cout<<sum/temp<<endl;
		else cout<<0<<endl;
		
		
		
	}
	return 0;
}
