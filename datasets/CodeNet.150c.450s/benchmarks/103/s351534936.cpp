#include <iostream>
#include <algorithm>
using namespace std;

int func(int num, int rest, int before){
	//if(before + 1 < 0) return 0;
	if(num == 0){
		if(rest == 0){
			//cout << before << endl;
			return 1;
		}
		return 0;
	}
	int res = 0;
	for(int i = 0; i <= rest && i <= before; ++i){
		res += func(num - 1, rest - i, i - 1);
	}
	return res;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, s;
	while(cin >> n >> s && (n != 0 || s != 0) ){
		cout << func(n, s, 9) << endl;
	}
	
	return 0;
}