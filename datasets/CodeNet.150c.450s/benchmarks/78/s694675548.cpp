#include <iostream>
#define INF 1000000
using namespace std;
int t[INF+100],tt[INF+100];

void DP(int *a, int x){
	for(int i = x;i <= INF;i++){
		a[i] = min(a[i],a[i-x]+1);
	}
}

int main(){
	int n;
	for(int i = 1;i <= INF;i++){
		t[i] = tt[i] = INF;
	}
	t[0] = tt[0] = 0;
	for(int i = 1;;i++){
		int a = (i*(i+1)*(i+2))/6;
		if(a > INF)break;
		DP(t,a);
		if(a%2 == 1){
			DP(tt,a);
		}
	}

	while(1){
		cin >> n;
		if(n == 0)break;
		cout << t[n] << " " << tt[n] <<endl;
	}
	return 0;
}