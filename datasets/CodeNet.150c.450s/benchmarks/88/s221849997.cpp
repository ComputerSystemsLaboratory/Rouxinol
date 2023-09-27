#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

bool comp(int h1, int w1, int h2, int w2){
	if(h1 * h1 + w1 * w1 > h2 * h2 + w2 * w2){
		return true;
	}
	if(h1 * h1 + w1 * w1 < h2 * h2 + w2 * w2){
		return false;
	}
	if(h1 > h2){
		return true;
	}
	return false;
}

int main(){
	
	int h, w;
	
	while(true){
		cin >> h >> w;
		if(h == 0 && w == 0){
			break;
		}
		int ans_h = 1000;
		int ans_w = 1000;
		for(int i = 160; i > 0; i--){
			for(int j = 160; j > i; j--){
				if(comp(i, j, h, w)){
					if(comp(ans_h, ans_w, i, j)){
						ans_h = i;
						ans_w = j;
					}
				}
			}
		}
		
		cout << ans_h << " " << ans_w << endl;
		
	}
	
	return 0;
}