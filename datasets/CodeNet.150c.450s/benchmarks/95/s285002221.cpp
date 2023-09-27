#include <iostream>
#include <string>
#define llint long long

using namespace std;

llint n;
string s[105];

int main(void)
{
	while(1){
		cin >> n;
		if(n == 0) break;
		
		for(int i = 1; i <= n; i++) cin >> s[i];
		
		llint ans = 0;
		for(int i = 1; i+1 <= n; i++){
			if(s[i][1] != s[i+1][1]) continue;
			if(s[i][0] == s[i+1][0]) continue;
			ans++;
		}
		cout << ans << endl;
	}
	
	return 0;
}
