#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX=2000005;
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
void Insert(int k){
	H++;
	int i=H;
	tree[i]=k;
	while(i>1 && tree[i/2]<tree[i]){
		swap(tree[i/2],tree[i]);
		i>>=1;
	}
}
int Extract(){
	int m=tree[1];
	tree[1]=tree[H--];
	maxHeapify(1);
	return m;
}
int main(){
	char s[20];
	H=0;
	while(~scanf("%s",s)){
		if(!strcmp(s,"end"))break;
		else if(!strcmp(s,"insert")){
			int k;
			scanf("%d",&k);
			Insert(k);
		}else if(!strcmp(s,"extract")){
			printf("%d\n",Extract());
		}
	}
	return 0;
}
