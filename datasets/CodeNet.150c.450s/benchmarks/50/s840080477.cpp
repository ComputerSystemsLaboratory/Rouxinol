#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <queue>
#include <utility>
using namespace std;
int main() {
	int N;
	int C[]={500,100,50,10,5,1};
	while(scanf("%d",&N),N) {
		N=1000-N;
		int sum=0;
		for(int i=0;i<6;i++) {
			sum+=N/C[i];
			N%=C[i];
		}
		printf("%d\n",sum);
	}
}