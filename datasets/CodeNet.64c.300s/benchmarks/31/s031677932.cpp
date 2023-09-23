#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<queue>
#include<map>
#include<functional>
using namespace std;
int main(){
	bool flg[31] = {0};
	for(int i = 0; i < 28; i++){
		int a;
		scanf("%d",&a);
		flg[a] = true;
	}
	for(int i = 1; i <= 30; i++){
		if(!flg[i])printf("%d\n",i);
	}
	return 0;
}