#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, t;
	char o;
	
	while(1){
		int a[30][30] = {}, x, y, gx = 10, gy = 10, count = 0;
		cin>>n;
		
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			cin>>x>>y;
			a[y][x] = 1;
		}
		cin>>m;
		for(int i = 0;i < m; i++){
			cin>>o>>t;
			
			if(o == 'N'){
				for(int i = 0; i <= t; i++)a[gy+i][gx] = 0;
				gy += t;
			}if(o == 'S'){
				for(int i = 0; i <= t; i++)a[gy-i][gx] = 0;
				gy -= t;
			}if(o == 'E'){
				for(int i = 0; i <= t; i++)a[gy][gx+i] = 0;
				gx += t;
			}if(o == 'W'){
				for(int i = 0; i <= t; i++)a[gy][gx-i] = 0;
				gx -= t;
			}
		}
		for(int i = 0; i <= 20; i++){
			for(int j = 0; j <= 20; j++){
				if(a[i][j] == 1)count++;
			}
		}
		if(count == 0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
