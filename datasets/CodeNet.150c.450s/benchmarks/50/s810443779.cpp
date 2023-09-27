#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n; cin >> n ;
		if(!n) break;
		int money=1000-n; int cnt=0;
		while(money>=500) {cnt++,money-=500;}
		while(money>=100) {cnt++,money-=100;}
		while(money>=50) {cnt++,money-=50;}
		while(money>=10) {cnt++,money-=10;}
		while(money>=5) {cnt++,money-=5;}
		while(money>=1) {cnt++,money-=1;}
		cout << cnt << endl;
	}
}