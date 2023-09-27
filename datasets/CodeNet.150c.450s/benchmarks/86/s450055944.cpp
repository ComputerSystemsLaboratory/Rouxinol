#include<iostream>
using namespace std;

int main(){
	int n, m, p, x[1000];
	while(1){
		cin >> n >> m >> p;
		
		int sum=0;
		
		if(n==0 && m==0 && p==0) break;
		
		p=100-p;
		
		for(int i=0; i<n; i++){
			cin >> x[i];
			sum+=x[i];
		}
		p*=sum;
		
		if(x[m-1]==0) p=0;
		else p=p/x[m-1];
		
		cout << p << endl;
	}
	return 0;
}