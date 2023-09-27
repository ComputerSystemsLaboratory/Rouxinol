#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	
	int n, r, p, c;
	
	vector<int> v1, v2;
	
	while(true){
		cin >> n >> r;
		if(n == 0 && r == 0){
			break;
		}
		for(int i = 1; i <= n; i++){
			v1.push_back(i);
		}
		for(int loop = 0; loop < r; loop++){
			cin >> p >> c;
			p--;
			copy(v1.end() - p - c, v1.end() - p, back_inserter(v2));
			v1.erase(v1.end() - p - c, v1.end() - p);
			copy(v2.begin(), v2.end(), back_inserter(v1));
			v2.erase(v2.begin(), v2.end());
			/*
			for(int i = 0; i < v1.size(); i++){
				printf("%d ", v1.at(i));
			}
			printf("\n");
			*/
		}
		printf("%d\n", v1.back());
		v1.erase(v1.begin(), v1.end());
	}
	
	return 0;
}