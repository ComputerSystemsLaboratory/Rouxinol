//============================================================================
// Name        : ITP_1_6_D.cpp
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
	vector<vector<int> > matrix;
	vector<int> vec;
	int N,M,ans;
	cin >> N >> M;
	matrix.resize(N);
	for(int i=0;i<N;++i){
		matrix[i].resize(M);
	}
	vec.resize(M);
	for(int i=0;i<N;++i) {
		for(int j=0;j<M;++j) {
			scanf("%d",&matrix[i][j]);
		}
	}
	for(int i=0;i<M;++i) {
		scanf("%d",&vec[i]);
	}
	for(int i=0;i<N;++i) {
		ans=0;
		for(int j=0;j<M;j++) {
			ans+=matrix[i][j]*vec[j];
		}
		printf("%d\n",ans);
	}

	return 0;
}