#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, A, B, C, X, Y[110];
	
	while(1){
		int count = 0, j = 0, temp;
		cin>>N>>A>>B>>C>>X;
		
		if(N == 0 && A == 0 && B == 0 & C == 0 && X == 0)break;
		
		for(int i = 1; i <= N; i++)cin>>Y[i];
		
		while(1){
			for(int i = 1; i <= N; i++){
				if(Y[i] == X) { count++;  Y[i] = -1; break;}
				else if(Y[i] != -1) break;
			}//cout<<X<<endl;
			if(count == N) break;
			X = (A * X + B)%C;
			j++;
			if(j > 10000){j = -1; break;}
		}
		cout<<j<<endl;
	}
	return 0;
}
