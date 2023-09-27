#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

#define MAX 10000

struct Node {
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

#if LOCAL
// Split Function
vector<int> split_int(string input,char del){
    vector<int> output;
    string substr;
    for(const char c : input){
        if(c == del){
          output.push_back(atoi(substr.c_str()));
          substr.clear();
        } else {
          substr += c;
        }
    }
    output.push_back(atoi(substr.c_str()));
    return output;
}

vector<string> split_str(string input,char del){
    vector<string> output;
    string substr;
    for(const char c : input){
        if(c == del){
          output.push_back(substr);
          substr.clear();
        } else {
          substr += c;
        }
    }
    output.push_back(substr);
    return output;
}
#endif // for local test

void inorder(Node *u)
{
	if (u == NIL) {
        return;
    }
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u)
{
    if (u == NIL) {
        return;
    }
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

void insert_bst(int i_key)
{
    Node *y = NIL; // parent of x
    Node *x = root; // 検索対象, 初期値をrootとする
    // Node for insert
    Node *z;
    z = (Node*) malloc(sizeof(Node));
    z->key = i_key;
    z->left = NIL;
    z->right = NIL;

    while(x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key){
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

int main() {
	int n_node, i_key;
	scanf("%d", &n_node);

#if LOCAL // for local test
	vector<string> input = {"insert 30", "insert 88", "insert 12",
	 						"insert 1", "insert 20", "insert 17",
							"insert 25", "print"};
	// input for local test
	vector<string> vec_tmp;
    for (int i = 0; i < n_node; i++) {
        vec_tmp = split_str(input[i], ' ');
        if (vec_tmp[0] == "insert") {
            i_key = atoi(vec_tmp[1].c_str());
            insert_bst(i_key);
        } else if (vec_tmp[1] == "print") {
            inorder(root);
            cout << "\n";
            preorder(root);
            cout << "\n";
        }
    }
#else // for online test
    string com;
    for (int i = 0; i < n_node; i++) {
        cin >> com;
        if (com == "insert") {
            scanf("%d", &i_key);
            insert_bst(i_key);
        } else if (com == "print") {
            inorder(root);
            cout << "\n";
            preorder(root);
            cout << "\n";
        }
    }
#endif // for online test

    return 0;
}

