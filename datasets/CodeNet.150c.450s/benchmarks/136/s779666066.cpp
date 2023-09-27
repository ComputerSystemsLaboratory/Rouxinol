#include <iostream>

using namespace std;

// プロトタイプ宣言
int gcd(int i, int j);

int main()
{
	
	int i,j;
	while(cin >> i >> j){
		int tmp;
		if(i<j){
			tmp = i;
			i = j;
			j = tmp;
		}
		int ret_gcd, ret_lcm;
		ret_gcd = gcd(i,j);
		ret_lcm = (i/ret_gcd)*j;
		
		cout << ret_gcd << ' ' << ret_lcm <<endl;
		
	}
	return 0;
}

int gcd(int i, int j)
{
	
	if(j > 0){
		return gcd(j, i%j);
	}else{
		return i;
	}
	
}