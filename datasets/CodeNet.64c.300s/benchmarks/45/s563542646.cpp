#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,m,p;
	int x[100];
	double sum,pool;
	int win;
	
	while(1){
		cin >> n >> m >> p;
		if(n==0 && m==0 && p==0)break;
		
		sum = 0;
		for(int i=0;i<n;i++){
			cin >> x[i];
			sum += x[i] * 100;
		}
		
		if(x[m-1]==0){
			cout << 0 << endl;
		}else{
			pool = sum - sum * p/100;
			win = pool / x[m-1];
			cout << win << endl;
		}
		
	}
	
	return 0;
}
		
		