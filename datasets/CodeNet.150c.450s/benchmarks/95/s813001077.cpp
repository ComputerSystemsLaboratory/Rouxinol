#include <bits/stdc++.h>
using namespace std;


bool solve(){
	int n;
	cin >> n;
	if( n == 0 )return false;
	int now = 0;
	int le = 0,ri = 0,cnt = 0;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		if(s[0] == 'l'){
			if(s[1] == 'u')le = 1;
			else le = 0;
		}else{
			if(s[1] == 'u')ri = 1;
			else ri = 0;
		}
		if(le == 1 && ri == 1 && now == 0){
			now = 1;cnt++;
		}else if(le == 0 && ri == 0 && now == 1){
			now = 0;cnt++;
		}
	}
	cout << cnt << endl;
	return true;
}

int main(void){
	while(solve()){}


	return 0;
}