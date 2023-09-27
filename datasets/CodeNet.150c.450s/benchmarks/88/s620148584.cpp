#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// true:a < b false:a > b
bool mycomp(pair <int, int> a, pair <int, int> b)
{
	int c = a.first*a.first + a.second*a.second;
	int d = b.first*b.first + b.second*b.second;
	if (c == d){
		return a.first < b.first;
	}
	return c < d;
}

int main(void)
{
	int h, w;

	// cout << mycomp(make_pair(1, 2), make_pair(1, 3)) << endl;
	while (cin >> h >> w){
		if (h == 0 && w == 0){
			return 0;
		}
		pair <int, int> rect(h, w);
		pair <int, int> ret(-1, -1);
		int nowmax = 10e9;
		for (int i = 1; i <= 150; i++){
			for (int j = i+1; j <= 150; j++){
				if (i == h && j == w) continue;
				pair <int, int> tmp(i, j);
				if (mycomp(rect, tmp)){ // tmpの方が大きい
					if (ret.first == -1 || mycomp(tmp, ret)){
						ret = tmp;
					}
				}
			}
		}

		cout << ret.first << " " << ret.second << endl;
	}

	return 0;
}