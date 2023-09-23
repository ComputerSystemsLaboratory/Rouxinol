#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

int main() {
	bool e[30]={0};
    for(int i=0;i<28;i++) {
		int n;
		scanf("%d",&n);
		e[n-1]=1;
	}
	for(int i=0;i<30;i++) {
		if(!e[i]) printf("%d\n",i+1);
	}
}