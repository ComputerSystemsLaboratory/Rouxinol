#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

int main() {
	int A,B,S=0,T=0;
	for(int i=0;i<4;i++) {
		scanf("%d",&A);
		S+=A;
	}
	for(int i=0;i<4;i++) {
		scanf("%d",&B);
		T+=B;
	}
	printf("%d\n",max(S,T));
}