#include <iostream>
using namespace std;

int main(){
	int ans;
	int n, y, m, d;
	cin >> n;
	while(n--){
		ans = 0;
		cin >> y >> m >> d;
		ans += (y-1)*200 + (m-1)*20 + d;
		ans -= 5*(y-((y-1)/3)-1);
		if(y%3)ans -= (m-1)/2;
		cout << 196470-ans+1 << endl;
	}
	return 0;
}