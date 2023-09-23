#include<iostream>
using namespace std;

int stair[31];
int n;

void solve(){
	for(int i=2; i<=30; i++)
		stair[i] = 0;
	stair[1] = 1;
	stair[2] = 1;
	stair[3] = 1;
	for(int i=1; i<=27; i++){
		stair[i+1] += stair[i];
		stair[i+2] += stair[i];
		stair[i+3] += stair[i];
	}
	stair[29] += stair[28];
	stair[30] += stair[28];
	stair[30] += stair[29];
}

int main(){
	solve();
	int ans;
	while(true){
		cin >> n;
		if(!n)
			return 0;
		ans = stair[n]/10;
		if(stair[n]%10)
			ans++;
		if(ans%365)
			ans += 365;
		ans /= 365;
		cout << ans << endl;
	}
}