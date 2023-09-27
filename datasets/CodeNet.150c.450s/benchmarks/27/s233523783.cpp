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
	int key;
	node *p, *lc, *rc;
	node(int key){
		this->p = this->lc = this->rc = NULL;
		this->key = key;
	}
	void push(node *nod){
		if(this->key == INT_MAX){
			this->key = nod->key;
			return;
		}
		
		if(this->key > nod->key){
			if(this->lc == NULL){
				nod->p = this;
				this->lc = nod;
			}else this->lc->push(nod);
		}else{
			if(this->rc == NULL){
				nod->p = this;
				this->rc = nod;
			}else this->rc->push(nod);
		}
	}
	void inprint(){
		if(this->lc != NULL) this->lc->inprint();
		cout << " " << this->key;
		if(this->rc != NULL) this->rc->inprint();
	}
	void preprint(){
		cout << " " << this->key;
		if(this->lc != NULL) this->lc->preprint();
		if(this->rc != NULL) this->rc->preprint();
	}
};

int main() {
	int n;
	cin >> n;
	
	node top(INT_MAX);
	while(n--){
		string com;
		cin >> com;
		
		if(com[0] == 'i'){
			int key;
			cin >> key;
			
			node *nod = new node(key);
			top.push(nod);
		}else{
			top.inprint();
			cout << endl;
			top.preprint();
			cout << endl;
		}
	}
	
	return 0;
}