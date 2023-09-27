#include <bits/stdc++.h>
#define INT(name) int name; scanf("%d",&name);
#define VINT(name,n) vector<int> name(n); for(int i = 0;i < n;i++) scanf("%d",&name[i]);

using namespace std;

int main(int argc, char const *argv[]){
	VINT(height,10)
	sort(height.begin(),height.end(),greater<int>());
	for(int i = 0;i < 3;i++){
		printf("%d\n",height[i]);
	}
	return 0;
}