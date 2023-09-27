#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int main()
{
	int n, a, b, c, x;
	while(1){
		cin >> n >> a >> b >> c >> x;
		if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;
		int y[200], next_x=0, cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> y[i];
		}
		int now_y;
		for(int i = 0; i < n; i++){
			now_y = y[i];
			while(1){
				next_x = (a * x + b) % c;
				if(y[i] == x){
					if(i != n-1) cnt++;
					x = next_x;
					break;
				}
				else {
					cnt++;
					if(cnt > 10000){
						cnt = -1;
						i = 200;
						break;
					}
					else x = next_x;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}