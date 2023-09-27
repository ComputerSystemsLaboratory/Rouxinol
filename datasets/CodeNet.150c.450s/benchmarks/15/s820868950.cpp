#include <cstdio>

int n,q;
int s[10001];

int search(int key){
	for(int i=0;i<n;i++){
		if(s[i]==key)return 1;
	}
	return 0;
}

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&q);
	int cnt=0;
	for(int i=0;i<q;i++){
		int t;
		scanf("%d",&t);
		cnt+=search(t);
	}
	printf("%d\n",cnt);
	return 0;
}