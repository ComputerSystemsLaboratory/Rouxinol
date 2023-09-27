#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#define N 1000000
using namespace std;

int main(){
	int n,k,s=0,d=0;
	scanf(" %d %d", &n , &k);
	int a[N],h;
	for(int i=0;i<n;i++){
		scanf(" %d", &h);
		s += h/k;
		d = max(d, h);
		a[i] = h;
	}
	
	int low=s-1,high,mid;
	high = min(1000000000,(d*n)/k);
	while(1){
		if(high-low <= 1) break;
		mid = (low+high)/2;
		int count=0, bef=0,bag,p;
		bool f = true;
		while(1){
			if(bef == n) break;
			if(count >= k){
				f = false;
				break;
			}
			bag = mid;
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