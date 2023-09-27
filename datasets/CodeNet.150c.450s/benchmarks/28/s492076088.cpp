#include<bits/stdc++.h>
using namespace std;

long long n, k, w[100005];

bool cal(long long x){
	long long sum = 0;
	long long cnt = 0;
	
	for(long long i = 0 ; i < n ; i++){
		if(w[i] > x) return 0;
		if(sum + w[i] > x){
			sum = 0;
			cnt++;
		}
		sum += w[i];
	}
	if(cnt < k) return 1;
	else return 0;
}

int main(){
	cin >> n >> k;
	for(long long i = 0 ; i < n ; i++){
		cin >> w[i];
	}
	
	long long l = 0, r = 1000000000, mid;
	
	for(int i = 0 ; i < 1000 ; i++){
		mid = (l + r) / 2;
		if(cal(mid)) r = mid;
		else l = mid;
	}
	
	cout << r << endl;
	
	return 0;
}