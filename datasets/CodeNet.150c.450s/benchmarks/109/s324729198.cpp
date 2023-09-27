#include <cstdio>
#include <array>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n),n){
		array<int,24*60*60> time;
		for(int i=0;i<24*60*60;i++) time[i] = 0;
		for(int i=0;i<n;i++){
			int h1,m1,s1,h2,m2,s2;
			scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
			
			int start = h1*60*60 + m1*60 + s1;
			int end = h2*60*60 + m2*60 + s2;
			for(int j=start;j<end;j++) time[j]++;
		}
		int ret = 0;
		for(int i=0;i<24*60*60;i++){
			ret = max(ret,time[i]);
		}
		printf("%d\n",ret);
	}
	return 0;
}