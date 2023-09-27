#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, j, k, l;
	int n, Y, M, D, x, count = 0;
	
	cin>>n;
	
	for(l = 0; l < n; l++){
		cin>>Y>>M>>D;
		
		count = 0;
		
		
		for(i = Y; i < 1000; i++){
			if(i == Y) j = M;
			else j = 1;
			for(; j <= 10;j++){
				if(j%2 == 1) x = 20;
				else x = 19;
				if(i%3 == 0)x = 20;
				if(Y == i && M == j) k = D;
				else k = 1;
				for(; k <= x; k++){
					count++;
				}
			}
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}
