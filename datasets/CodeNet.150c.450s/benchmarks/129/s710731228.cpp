//============================================================================
// Name        : ITP_1_7_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	int r,c,n,rsum;
	vector<int> csum;
	cin >> r >> c;
	csum.resize(c+1);
	for(int i=0;i<c+1;++i) {
		csum[i]=0;
	}
	for(int i=0;i<r;++i) {
		rsum=0;
		for(int j=0;j<c;++j) {
			scanf("%d",&n);
			printf("%d ",n);
			csum[j]+=n;
			rsum+=n;
		}
		printf("%d\n",rsum);
		csum[c]+=rsum;
	}
	for(int j=0;j<c;++j) {
		printf("%d ",csum[j]);
	}
	printf("%d\n",csum[c]);
	return 0;
}