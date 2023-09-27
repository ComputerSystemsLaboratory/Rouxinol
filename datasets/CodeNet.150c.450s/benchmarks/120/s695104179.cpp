#include <bitset>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(void)
{



	int R,C;
	int a;

	while(cin >> R >> C, R | C){
	bitset<10000> sen[10];
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cin >> a;
			sen[i][j] = a > 0;
		}
	}

	int ans = 0;
	bitset<1 << (10-1)> re;
	for(int i = 0; i < 1 << (R-1); i++){
		re = i;
		int sum = 0;
		for(int j = 0; j < R; j++){
			if(re[j])
				sen[j].flip();
		}
		for(int j = 0; j < C; j++){
			int x = 0;
			for(int k = 0; k < R; k++)
				if(sen[k][j])
					x++;
			sum += max(x, R-x);
		}
		for(int j = 0; j < R; j++){
			if(re[j])
				sen[j].flip();
		}
		ans = max(sum,ans);
		
	}

	cout << ans << endl;


	}
	return 0;
}

	