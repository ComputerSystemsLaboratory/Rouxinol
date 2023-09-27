#include <bits/stdc++.h>

using namespace std;
struct Node {
    int k;
    Node *p, *l, *r;
};
Node *NIL, *root;
void insert(int key) {
    Node *parent = NIL;
    Node *node = root;
    Node *target = (Node *)malloc(sizeof(Node));
    target->k = key;
    target->l = NIL;
    target->r = NIL;

    while(node != NIL) {
        parent = node;
        if(target->k < node->k) {
            node = node->l;
        } else {
            node = node->r;
        }
    }
    target->p = parent;
    if(parent == NIL) {
        root = target;
    } else {
        if(target->k < parent->k) {
            parent->l = target;
        } else {
            parent->r = target;
        }
    }
}
void inorder(Node *node) {
    if(node->l != NIL) {
        inorder(node->l);
    }
    printf(" %d", node->k);
    if(node->r != NIL) {
        inorder(node->r);
    }
}
void preorder(Node *node) {
    printf(" %d", node->k);
    if(node->l != NIL) {
        preorder(node->l);
    }
    if(node->r != NIL) {
        preorder(node->r);
    }
}
bool find(int key){
	Node *node = root;
	while(node != NIL){
		if(key < node->k){
			node = node->l;
		}else if(key > node->k){
			node = node->r;
		}else{
			return true;
		}
	}
	return false;
}
int main() {
    int n, key;
    string com;
    NIL = (Node *)malloc(sizeof(Node));
    root = (Node *)malloc(sizeof(Node));
	root = NIL;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> com;
        if(com == "print") {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
        } else {
            scanf("%d", &key);
            if(com == "find") {
				if(find(key)){
					printf("yes\n");
				}else{
					printf("no\n");
				}
            } else if(com == "insert") {
                insert(key);
            }
        }
    }
}
