#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		
		int p[n];
		for(int i=0;i<n;i++) cin >> p[i];
		
		sort(p,p+n);
		
		int dif,ma=10000000;
		for(int i=0;i<n-1;i++){
			dif=p[i+1]-p[i];
			ma=min(dif,ma);
		}
		cout << ma <<endl;
	}
	
	
	
	return 0;
}
