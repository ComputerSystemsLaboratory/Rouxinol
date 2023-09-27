#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char Data[20010];
	int height[20010];
	int height_max[20010];
	scanf("%s",Data);
	queue<int> Ans;
	int len = strlen(Data);
	int h = 0,Max_h = 0;
	height[len] = 0;
	height_max[len] = 0;
	for(int i = len-1; i >= 0; --i){
		switch(Data[i]){
			case '\\':
				h++;
				break;
			case '/':
				h--;
				break;
			case '_':
				break;
			default:
				break;
		}
		height[i] = h;
		Max_h = max(Max_h,h);
		height_max[i] = Max_h;
	}

	int area = 0, n = 0;
	int p = 0, tmp1 = 0, tmp2 = 0, tmp3 = 0;
	bool flag;
	for(int i = 0; i < len + 1; ++i){
		flag = true;
		if (height_max[i+1] < height[i]){
			p = 0;
			flag = false;
		}
		// cout << (flag?1:0);
		if(flag){
			switch(height[i]-height[i+1]){
				case 1:
					// tmp2++;
					p++;
					break;
				case -1:
					// tmp3++;
					p--;
					break;
				case 0:
					break;
				default:
					break;
			}
			if(p > 0){
				tmp1 += p;
			}
			if(p == 0){
				if(tmp1!=0){
					n++;
					area += tmp1;
					Ans.push(tmp1);
				}
				tmp1 = 0;
				// tmp2 = 0;
				// tmp3 = 0;
			}
			if(p < 0){
				p = 0;
				tmp1 = 0;
				// tmp2 = 0;
				// tmp3 = 0;
			}
			// cout << p << " ";
		}
	}
	cout << area << endl << n;
	while(!Ans.empty()){
		cout << " " <<Ans.front();
		Ans.pop();
	}
	cout << endl;
	return 0;
}