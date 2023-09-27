#include <iostream>
using namespace std;

int h[1501],w[1501];
int n,m,sum,line_length,a;
int ish[1500001],isw[1500001];


int solve(int n, int m){
	for (int i=1; i<=1500000; i++){
		ish[i] = 0;
		isw[i] = 0;
	}
	sum = 0;
	
	for (int i=0; i<=n; i++){
		for (int j=i+1; j<=n; j++){
			ish[h[j]-h[i]]+=1;
		}
	}
	for (int i=0; i<=m; i++){
		for (int j=i+1; j<=m; j++){
			isw[w[j]-w[i]]+=1;
		}
	}
	
	for (int i=1; i<=1500000; i++){
		sum += ish[i] * isw[i];
	}
	
	return sum;
}


int main()  
{    
	h[0] = 0;
	w[0] = 0; 
	while(cin >> n >> m && n>0){
		for (int i=1; i<=n; i++){
			cin >> a;
			h[i] = h[i-1] + a;
		}
		for (int i=1; i<=m; i++){
			cin >> a;
			w[i] = w[i-1] + a;
		}
		cout << solve(n,m) << endl;
	}
	     
	
	return 0;  
}  