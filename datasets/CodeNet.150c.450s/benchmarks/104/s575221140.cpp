#include <iostream>
#include <cstdio>

#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int w, n;

	cin >> w;
	cin >> n;

	vector<pair<int, int>> intersection(n);

	for(int i = 0; i < n; i++){
		scanf("%d,%d", &intersection[i].first, &intersection[i].second);
	}

	for(int i = 1; i <= w; i++){
		int r = i;
		for_each(intersection.rbegin(), intersection.rend(),
				[&r](const pair<int, int>& x){
					if(x.first == r){
						r = x.second;
					}else if(x.second == r){
						r = x.first;
					}
				}
		);
		cout << r << endl;
	}

	return 0;
}