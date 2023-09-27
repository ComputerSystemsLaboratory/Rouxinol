#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int MAX=260;
int tree[MAX];
int main(){
	memset(tree,-1,sizeof(tree));
	int H;
	cin>>H;
	for(int i=1;i<=H;i++){
		cin>>tree[i];
	}
	for(int i=1;i<=H;i++){
		printf("node %d: key = %d, ",i,tree[i]);
		if(i/2>0)printf("parent key = %d, ",tree[i/2]);
		if(i*2<=H)printf("left key = %d, ",tree[i*2]);
		if(i*2+1<=H)printf("right key = %d, ",tree[i*2+1]);
		putchar('\n');
	}
	return 0;
}
