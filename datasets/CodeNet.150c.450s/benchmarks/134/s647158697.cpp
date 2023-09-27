#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

struct node {
	int id, parent, left, right;
	void walkPreorder(node *nds){
		printf(" %d", this->id);
		if(this->left != -1) nds[this->left].walkPreorder(nds);
		if(this->right!= -1) nds[this->right].walkPreorder(nds);
	}
	void walkInorder(node *nds){
		if(this->left != -1) nds[this->left].walkInorder(nds);
		printf(" %d", this->id);
		if(this->right!= -1) nds[this->right].walkInorder(nds);
	}
	void walkPostorder(node *nds){
		if(this->left != -1) nds[this->left].walkPostorder(nds);
		if(this->right!= -1) nds[this->right].walkPostorder(nds);
		printf(" %d", this->id);
	}
};

int main() {
	int n;
	scanf("%d", &n);
	
	node *nds = new node[n];
	for(int i = 0; i < n; i++){
		nds[i].parent = nds[i].right = nds[i].left = -1;
	}
	
	for(int i = 0; i < n; i++){
		int id, r, l;
		scanf("%d %d %d", &id, &l, &r);
		nds[id].id = nds[l].parent = nds[r].parent = id;
		nds[id].left = l;
		nds[id].right = r;
	}
	
	for(int i = 0; i < n; i++){
		if(nds[i].parent == -1){
			printf("Preorder\n");
			nds[i].walkPreorder(nds);
			printf("\nInorder\n");
			nds[i].walkInorder(nds);
			printf("\nPostorder\n");
			nds[i].walkPostorder(nds);
			printf("\n");
			break;
		}
	}
	
	return 0;
}