#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
#define NIL -1

struct Tree{
	int left,right,parent;
};

Tree *T;
int n;

void preorder(int i){
	if(i == NIL) return;
	cout << " " << i;
	preorder(T[i].left);
	preorder(T[i].right);
} 

void inorder(int i){
	if(i == NIL) return;
	inorder(T[i].left);
	cout << " " << i;
	inorder(T[i].right);
}

void postorder(int i){
	if(i == NIL) return;
	postorder(T[i].left);
	postorder(T[i].right);
	cout << " " << i;
}

int main(){
	cin >> n;
	T = new Tree[n];
	int a,b,c;
	for(int i = 0;i < n;i++){
		T[i].left = T[i].right = T[i].parent = NIL;
	}
	for(int i = 0;i < n;i++){
		cin >> a >> b >> c;
		if(b != NIL){
			T[a].left = b;
			T[b].parent = a;
		}
		if(c != NIL){
			T[a].right = c;
			T[c].parent = a;
		}
	}
	int root;
	for(int i = 0;i < n;i++){
		if(T[i].parent == NIL) root = i;
	}
	cout << "Preorder" << endl;
	preorder(root);
	cout << endl <<"Inorder" << endl;
	inorder(root);
	cout << endl << "Postorder" << endl;
	postorder(root);
	cout << endl;
	return 0;
}