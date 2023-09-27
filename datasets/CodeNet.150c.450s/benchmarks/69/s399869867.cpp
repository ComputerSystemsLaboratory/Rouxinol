#include <iostream>
using namespace std;

int balls[10];

bool dfs(int idx, int b, int c){
	if(idx > 9) return true;
	
	bool ok = false;
	if(b < balls[idx]){
		ok = dfs(idx+1, balls[idx], c);
	}
	if(c < balls[idx]){
		ok = dfs(idx+1, b, balls[idx]);
	}
	return ok;
}

int main() {
	int n; cin >> n;
    while(n--){
        for(int i = 0; i < 10; i++){
            cin >> balls[i];
        }
         
        if(dfs(0, 0, 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}