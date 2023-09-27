#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int n, s[100], k;
	double l, g, sum;
	double ans;
	while(1){
		cin >> n;
		if(!n) break;
		g = -1;
		l = 1001;
		sum = 0;
		for(k=0;k<n;k++){
			cin >> s[k];
			sum += s[k];
			if(g < s[k]) g = s[k];
			if(l > s[k]) l = s[k];
			//cout << g << " " << l << " " << sum << endl;
		}
		ans = (sum - l - g)/((double)n-2);
		cout << (int)ans << endl;
	}
	return 0;
}