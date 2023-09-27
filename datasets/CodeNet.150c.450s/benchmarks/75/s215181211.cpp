#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX=500005;
int tree[MAX];int H;
void maxHeapify(int i){
	int lgst=i;
	if(2*i<=H&&tree[lgst]<tree[2*i])lgst=2*i;
	if(2*i+1<=H&&tree[lgst]<tree[2*i+1])lgst=2*i+1;
	if(lgst==i)return;
	swap(tree[lgst],tree[i]);
	maxHeapify(lgst);
}
void buildMaxHeap(){
	for(int i=H/2;i>0;i--){
		maxHeapify(i);
	}
}
int main(){
	memset(tree,-1,sizeof(tree));
	cin>>H;
	for(int i=1;i<=H;i++){
		cin>>tree[i];
	}
	buildMaxHeap();
	for(int i=1;i<=H;i++){
		printf(" %d",tree[i]);
	}
	putchar('\n');
	return 0;
}
