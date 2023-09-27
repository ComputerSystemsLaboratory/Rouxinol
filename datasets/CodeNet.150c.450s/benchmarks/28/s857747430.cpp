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
	int a[N],h1,h2,h3,h4,h5;
	int i=0;
	for(;n-i>6; i+=5){
		scanf(" %d\n%d\n%d\n%d\n%d\n",&h1,&h2,&h3,&h4,&h5);
		a[i]=h1; a[i+1]=h2; a[i+2]=h3; a[i+3]=h4; a[i+4]=h5;
		s +=(h1+h2+h3+h4+h5)/k;
		d = max( max(h1, max(h2, h3)), max(h4, max(h5, d)));
	}
	for(;i<n;i++){
		scanf(" %d", &h1);
		s += h1/k;
		d = max(d, h1);
		a[i] = h1;
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