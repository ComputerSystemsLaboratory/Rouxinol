#include <bits/stdc++.h>

using namespace std;

bool Memo[32] = {1,1,1};
int Trib[32] = {0,1,1};
int trib(int num){
	for(int i = 3;i <= num+1;i++){
		if(Memo[i])continue;
		Trib[i] = Trib[i-1] + Trib[i-2] + Trib[i-3];
		Memo[i] = 1;
	}
	return Trib[num+1];
}

int main(){
	int n;
	int ans; 
	while(cin >> n,n){
		ans = trib(n);
		if(ans  % 3650  == 0){
			ans = ans/3650;
		}else{
			ans = ans/3650+1;
		}
		cout << ans << endl;
	}	
	return 0;
}