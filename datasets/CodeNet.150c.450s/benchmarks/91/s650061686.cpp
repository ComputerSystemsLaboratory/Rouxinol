#include<cstdio>
using namespace std;
#define max 1000000
bool p[max];
int main(){
    p[1] = true;
    for(int i = 2; i * i < max; i++){
		if(p[i]) continue;
		for(int j = i * i; j < max; j+=i) p[j] = true;
	}
    int n;
    while(~scanf("%d",&n)){
		int ans = 0;
		for(int i = 1; i <= n; i++){
			if(!p[i])ans++;
		}
		printf("%d\n",ans);
	}
    return 0;
}