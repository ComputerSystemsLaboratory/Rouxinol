#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int n;
vector<int> pre;
vector<int> in;
vector<int> post;
void postorder(int i, vector<int> child[]){
	if(i==-1) return;
	vector<int> temp = child[i];
	postorder(temp.at(0),child);
	postorder(temp.at(1),child);
	post.push_back(i);
}
void inorder(int i, vector<int> child[]){
	if(i==-1) return;
	vector<int> temp = child[i];
	inorder(temp.at(0),child);
	in.push_back(i);
	inorder(temp.at(1),child);
}
void preorder(int i, vector<int> child[]){
	if(i==-1) return;
	pre.push_back(i);
	vector<int> temp = child[i];
	preorder(temp.at(0),child);
	preorder(temp.at(1),child);
}
int main(){
	scanf("%d",&n);
	int tree[n]; //store parent
	for(int i = 0; i<n; i++){
		tree[i] = -1;
	}
	vector<int> child[n];
	for(int i = 0; i<n; i++){
		int p;
		int l,r;
		int count = 0; // count the degree
		scanf("%d %d %d",&p,&l,&r);
		vector<int> temp;
		{
			tree[l] = p;temp.push_back(l);
		}
		{
			tree[r] = p;temp.push_back(r);
		}
		child[p] = temp;
	}
	int root;
	for(int i = 0; i<n; i++){
		if(tree[i] == -1){
			root = i;break;
		}
	}
	printf("Preorder\n");
	preorder(root,child);
	for(int i = 0; i<pre.size(); i++){
		if(i==pre.size()-1)
		printf(" %d\n",pre.at(i));
		else printf(" %d",pre.at(i));
	}
	printf("Inorder\n");
	inorder(root,child);
	for(int i = 0; i<in.size(); i++){
		if(i==in.size()-1)
		printf(" %d\n",in.at(i));
		else printf(" %d",in.at(i));
	}
	printf("Postorder\n");
	postorder(root,child);
	for(int i = 0; i<post.size(); i++){
		if(i==pre.size()-1)
		printf(" %d\n",post.at(i));
		else printf(" %d",post.at(i));
	}
	
	return 0;
}
