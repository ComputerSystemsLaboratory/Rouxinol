#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;

int n;

struct node{
	int l,r;
	int key;
	void init(int a){
		l=r=-1;
		key=a;
	}
};
struct bst{
	int size;
	node t[600001];
	void init(){
		size=0;
	}
	void insert(int v){
		int i=0;
		while(i<size){
			int& child=(v<t[i].key?t[i].l:t[i].r);
			if(child==-1)child=size;
			i=child;
		}
		t[size++].init(v);
	}
	bool find(int v){
		int i=0;
		while(i<size){
			if(t[i].key==v)return true;
			int child=(v<t[i].key?t[i].l:t[i].r);
			if(child==-1)child=size;
			i=child;
		}
		return false;
	}

	void preorder(int pos){
		if(pos==-1|| pos==size)return;
		printf(" %d",t[pos].key);
		preorder(t[pos].l);
		preorder(t[pos].r);
	}

	void inorder(int pos){
		if(pos==-1|| pos==size)return;
		inorder(t[pos].l);
		printf(" %d",t[pos].key);
		inorder(t[pos].r);
	}

	void postorder(int pos){
		if(pos==-1|| pos==size)return;
		postorder(t[pos].l);
		postorder(t[pos].r);
		printf(" %d",t[pos].key);
	}
};

bst T;

int main(void){
	scanf("%d",&n);
	char str[100];
	for(int i=0;i<n;i++){
		scanf("%s",str);
		if(str[0]=='i'){
			int a;
			scanf("%d",&a);
			T.insert(a);
		}else if(str[0]=='f'){
			int a;
			scanf("%d",&a);
			printf("%s\n",T.find(a)?"yes":"no");
		}else{
			T.inorder(0);
			printf("\n");
			T.preorder(0);
			printf("\n");
		}
	}
	return 0;
}