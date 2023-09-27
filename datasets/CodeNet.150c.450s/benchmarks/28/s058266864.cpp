#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,k;
	scanf(" %d %d", &n , &k);
	vector<int> a;
	for(int i=0;i<n;i++){
		int h;
		scanf(" %d", &h);
		a.push_back(h);
	}
	
	int low=0,high=1e9,mid;
	for(int _=0;_<100;_++){
		mid = (low+high)/2;
		int count=0, bef=0;
		bool f = true;
		while(1){
			if(bef == n) break;
			if(count >= k){
				f = false;
				break;
			}
			int bag = mid;
			int p;
			for(p=bef;p<n;p++){
				if(bag >= a[p]) bag-=a[p];
				else break;
			}
			bef = p;
			count++;
		}
		if(f) high = mid;
		else low = mid;
	}
	
	printf("%d\n", high);	
	
	return 0;
}