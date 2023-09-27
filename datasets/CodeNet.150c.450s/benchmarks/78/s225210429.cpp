#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> dp1(1000000,1000000);
	dp1[0] = 0;
	vector<int> dp2(1000000,1000000);
	dp2[0] = 0;
	for(int i=1;i*(i+1)*(i+2)/6<1000000;i++){
		int x = i*(i+1)*(i+2)/6;
		for(int j=0;j<1000000-x;j++){
			dp1[j+x] = min(dp1[j+x],dp1[j] + 1);
			if(x%2 == 1) dp2[j+x] = min(dp2[j+x],dp2[j] + 1);
		}
	}
	
	int a;
	while(cin >> a,a > 0){
		cout << dp1[a] << " " << dp2[a] << endl;
	}
	
	return 0;
}

