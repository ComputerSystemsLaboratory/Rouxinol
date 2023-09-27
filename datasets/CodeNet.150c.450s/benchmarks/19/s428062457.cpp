#include <cstdio>
#include <algorithm>
using namespace std;
int in(){ int x; scanf("%d", &x); return x; }
int main(){
	int num[100];
	while(1){
		for(int i = 0; i < 2; i++) num[i] = in();
		if(num[0] == 0 && num[1] == 0) break;
		sort(num, num+2);
		for(int i = 0; i < 2; i++) printf("%d%s", num[i], i<1?" ":"\n");
	}
	return 0;
}