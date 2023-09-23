#include<iostream>
using namespace std;
int main() {
	int data_lim;
	cin >> data_lim;
	for(int cnt=0;cnt<data_lim;cnt++) {
		int a,b,c;
		cin >> a >> b >> c;
		
		bool flg = false;
		// ピタゴラスの定理を適用
		if(a*a == b*b+c*c)
			flg = true;
		else if(b*b == a*a+c*c)
			flg = true;
		else if(c*c == a*a+b*b)
			flg = true;
		
		if(flg == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	
	return 0;
}