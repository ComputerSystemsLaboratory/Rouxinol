#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>

using namespace std;

typedef complex<double> P;

int main(){
	int x;
	while(cin>>x){
		int ans = 0;
		for (int i = 0; i < 600; i += x)
		{
			ans += i * i * x;
		}

		cout << ans << endl;
	}

	return 0;
}