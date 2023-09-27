#include <iostream>
#define NIL 2000000001
using namespace std;
typedef struct{
	int key;
	int lch;//??????id
	int rch;//??????id
}NODE;
NODE node[500001];
int root;
int n,a;
string s;
bool flag;

void insert(int id,int num){
	int node1=root;
	int parent=-1;
	while(node1!=-1){
		parent=node1;
		if(num<node[node1].key){
			node1=node[node1].lch;
		}else{
			node1=node[node1].rch;
		} 
	}
	//parent=node1;
	if(parent==-1){
		root=id;
		node[id].lch=node[id].rch=-1;
		node[id].key=num;
	}else if(num<node[parent].key){
		node[parent].lch=id;
		node[id].key=num;
		node[id].rch=node[id].lch=-1;
	}else{
		node[parent].rch=id;
		node[id].key=num;
		node[id].rch=node[id].lch=-1;
	}
}

void inordertreewalk(int id){
	if(node[id].lch!=-1)inordertreewalk(node[id].lch);
	//if(id==root){
	//	cout << node[id].key;	
	//}else if(node[id].key>node[root].key){
		cout << " "<< node[id].key;
	//}else{
	//	cout << node[id].key<<" ";
	//}
	if(node[id].rch!=-1)inordertreewalk(node[id].rch);
	return;
}

void preordertreewalk(int id){
	//if(id==root){
	//	cout << node[id].key;	
	//}else{
		cout << " "<< node[id].key;
	//}
	if(node[id].lch!=-1)preordertreewalk(node[id].lch);
	if(node[id].rch!=-1)preordertreewalk(node[id].rch);
	return;
}

bool find(int num){
	int id=root;
	while(id!=-1){
		if(node[id].key==num){
			return true;
		}else if(node[id].key>num){
			id=node[id].lch;
		}else{
			id=node[id].rch;
		}
	}
	return false;
}

int main(){
	root=-1;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>s;
		if(s=="insert"){
			cin >>a;
			insert(i,a);
		}else if(s=="print"){
			if(root==-1)continue;
			inordertreewalk(root);
			cout <<endl;
			preordertreewalk(root);
			cout <<endl;
		}else if(s=="find"){
			cin >>a;
			flag=find(a);
			if(flag){
				cout << "yes"<<endl;
			}else{
				cout << "no"<<endl;
			}
		}

	}
}