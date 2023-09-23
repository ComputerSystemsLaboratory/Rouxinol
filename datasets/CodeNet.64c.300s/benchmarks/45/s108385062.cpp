#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	while(1){
		cin >> n >> m >> p;
		if(n==0 && m==0){
			if(p==0) break;
		}
		int x[n+1],sum=0;
		for(int i=1;i<=n;i++){
			cin >> x[i];
			sum+=x[i];
		}
		sum*=100;
		if(x[m]==0){
			cout << 0 << endl;
		}else{
			sum=sum*100;
			sum=sum-(sum/100*p);
			sum=sum/100;
			sum=sum/x[m];
			cout << sum << endl;
		}
	}
}
		
		
