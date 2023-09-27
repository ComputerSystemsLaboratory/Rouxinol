#include <bits/stdc++.h>
using namespace std;

int main(){
	double n,i,tmp;
	double ans=100000;
	cin>>n;
	while(n--){
		ans *= 1.05;
		ans = ceil(ans/1000.0)*1000.0;

	}
	printf("%.f\n", ans);
	return 0;
}