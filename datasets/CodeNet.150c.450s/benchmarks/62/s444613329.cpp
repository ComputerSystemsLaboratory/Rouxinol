#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
	int ans[3];
	int a, b, c;
	while(cin >> a >> b >> c){
		ans[0] = a;
		ans[1] = b;
		ans[2] = c;
		sort(ans, ans+3);
		a = ans[0];
		b = ans[1];
		c = ans[2];
		cout << a << ' ' << b << ' ' << c << endl;
	}
	return 0;
}