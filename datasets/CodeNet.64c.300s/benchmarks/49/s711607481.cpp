#include <iostream>
using namespace std;

int main(){
	int a, b, ans;
	while (true)
	{
		cin >> a;
		if(cin.eof()){
			break;
		}
		cin >> b;
		int sum = a + b;
		ans = 0;
		while(sum >= 1)
		{
			sum /= 10;
			ans += 1;
		}
		cout << ans << endl;
	}
	return 0;
}