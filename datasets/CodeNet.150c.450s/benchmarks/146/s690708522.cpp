#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;cin >> n;
	float a[8];
	float x1, x2, y1, y2, ans;
	while(n--){
		for(int i = 0;i < 8;i++)cin >> a[i];
		y1 = a[3]-a[1];x1 = a[2]-a[0];
		y2 = a[7]-a[5];x2 = a[6]-a[4];
		ans = y1*x2-y2*x1;
		if(ans == 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0; 
}