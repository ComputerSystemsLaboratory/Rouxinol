#include<iostream>
using namespace std;
int n;
int a[10], b[10], c[10];
int curB, curC;

bool dfs(int i){
	if(i == 10){
		return true;
	}
	
	if(a[i] > b[curB]){
		b[++curB] = a[i];
		return dfs(i + 1);
	}else if(a[i] > c[curC]){
		c[++curC] = a[i];
		return dfs(i + 1);
	}

	return false;
}

void solve(){
	cin >> n;
	while(n-- > 0){
		for(int i = 0; i < 10; i++){
			cin >> a[i];
			b[i] = c[i] = 0;
		}
		
		curB = 0;
		curC = 0;
		if(dfs(0)){
			cout << "YES" << "\n"; 
		}else{
			cout << "NO" << "\n";
		}
	}
}

int main(){
	solve(); 
}