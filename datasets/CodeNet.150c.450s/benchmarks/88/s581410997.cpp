#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 
#include <algorithm>

using namespace std;

int main()
{
	int h, w;
	while(1){
		cin >> h >> w;
		if(h == 0 && w == 0) break;
		int i, j, a, b, c, ans_w=114, ans_h=514;
		a = (h * h) + (w * w);
		b = (ans_w * ans_w) + (ans_h * ans_h);
		for(i = 1; i <= 150; i++){
			if(i * i < a){
				for(j = i+1; j <= 150; j++){
					c = (i * i) + (j * j);
					if((c == a && i > h) || c > a){
						if(c < b){
							ans_h = i;
							ans_w = j;
							b = c;
						}
					} 
				}
			}
		}
		cout << ans_h << ' ' << ans_w << endl;
	}
	return 0;
}