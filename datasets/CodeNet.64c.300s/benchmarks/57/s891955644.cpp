#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define MAX_R 10
#define MAX_C 10000
 
int r,c;
bool a[MAX_R][MAX_C];
int ans;
 
void solve(int pos){
    if(pos == r){
	int res = 0;
	for(int i = 0 ; i < c ; i++){
	    int cnt = 0;     
	    for(int j = 0 ; j < r ; j++){
		if(a[j][i]) cnt++;
	    }
	    cnt = max(cnt,r-cnt);
	    res += cnt;
	}
	ans = max(ans,res);
	return;
    }
 
    solve(pos+1);
 
    for(int i = 0 ; i < c ; i++){
	a[pos][i] = !a[pos][i];
    }
 
    solve(pos+1);
}
 
int main(){
    while(cin >> r >> c , (r | c)){
	for(int i = 0 ; i < r ; i++){
	    for(int j = 0 ; j < c ; j++){
		cin >> a[i][j];
	    }
	}
	ans = 0;
	solve(0);
	cout << ans << endl;
    }
    return 0;
}