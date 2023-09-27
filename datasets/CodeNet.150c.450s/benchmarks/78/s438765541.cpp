#include <iostream>
using namespace std;
const int  N = 1000100;

int t1[200];
int t2[200];
int dp1[N] = {0};
int dp2[N] = {0};

int main(){
	int i,j,k=2,s;
	
	t1[1] = t2[1] = dp1[1] = dp2[1] = 1;
	for(i = 2; i < 200; i++){
		t1[i] = t1[i-1] * (i+2) / (i-1);
		if(t1[i] > 1e+6) break;
		dp1[t1[i]] = 1;
		if(t1[i]%2){ dp2[t1[i]] = 1; t2[k++] = t1[i];}
	}

	for(i = 2; i < N; i++){
		if(dp2[i]) continue;
		for(j = 1; t2[j] < i && j < 200; j++){
			if(!dp2[i] || (1 + dp2[i-t2[j]]) < (dp2[i])){
				dp2[i] = 1 + dp2[i-t2[j]];
			}
		}
		if(dp1[i]) continue;
		for(j = 1; t1[j] < i; j++){
			if(!dp1[i] || (1 + dp1[i-t1[j]]) < (dp1[i])){
				dp1[i] = 1 + dp1[i-t1[j]];
			}
		}
	}

	while(cin >> s, s)
		cout << dp1[s] << ' ' << dp2[s] << endl;

	return 0;
}