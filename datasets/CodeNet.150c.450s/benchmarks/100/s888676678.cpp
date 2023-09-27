#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long LL; 

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	LL ans = 1;
	while(n > 0){
		ans *= n;
		n--;
	}
	
	cout << ans << endl;
		
	return 0;
}