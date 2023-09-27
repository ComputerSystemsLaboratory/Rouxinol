#include <bits/stdc++.h>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

using namespace std;


int a[1010];

int main(void){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		rep(i,n) cin >> a[i];
		cout << (accumulate(a,a+n,0)-*max_element(a,a+n)-*min_element(a,a+n))/(n-2) << endl;
	}
}