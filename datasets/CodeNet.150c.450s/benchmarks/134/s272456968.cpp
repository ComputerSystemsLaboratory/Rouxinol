#include <iostream>
using namespace std;
int n,id,k;
typedef struct{
	int parent;//???
	int depth;//??±???
	int lch;//????????????id
	int rch;//????????????id
	int ch;//????????°
	int bro;//?????????id
	int height;//??????
}NODE;
NODE node[30];
int root=-1;//id

int h_check(int i){
	int a=0,b=0;
	if(node[i].lch!=-1)a=h_check(node[i].lch)+1;
	if(node[i].rch!=-1)b=h_check(node[i].rch)+1;
	node[i].height=max(a,b);
	return max(a,b);
}

void preordertreewalk(int id){
	cout << " "<< id;
	if(node[id].lch!=-1)preordertreewalk(node[id].lch);
	if(node[id].rch!=-1)preordertreewalk(node[id].rch);
	return;
}

void inordertreewalk(int id){
	if(node[id].lch!=-1)inordertreewalk(node[id].lch);
	cout << " "<< id;
	if(node[id].rch!=-1)inordertreewalk(node[id].rch);
	return;
}

void postordertreewalk(int id){
	if(node[id].lch!=-1)postordertreewalk(node[id].lch);
	if(node[id].rch!=-1)postordertreewalk(node[id].rch);
	cout << " "<< id;
	return;
}


int main(){
		cin >> n;
		for(int i=0;i<30;i++){
			node[i].parent=-1;
			node[i].depth=0;
			node[i].lch=-1;
			node[i].rch=-1;
			node[i].ch=0;
			node[i].bro=-1;
			node[i].height=0;
		}
		for(int i=0;i<n;i++){
			cin >>id;
			cin >>node[id].lch>>node[id].rch;
			if(root==-1)root=id;
			if(node[id].lch!=-1){
				node[id].ch++;
				node[node[id].lch].parent=id;
				node[node[id].lch].bro=node[id].rch;
				node[node[id].lch].depth=node[id].depth+1;
			}
			if(node[id].rch!=-1){
				node[id].ch++;
				node[node[id].rch].parent=id;
				node[node[id].rch].bro=node[id].lch;
				node[node[id].rch].depth=node[id].depth+1;
			}

		}
		int temp=root;
		while(temp!=-1){
			root=temp;
			temp=node[temp].parent;
		}
		h_check(root);
		//cout << root<<endl;
		cout <<"Preorder" <<endl;
		preordertreewalk(root);
		cout<<endl;
		cout << "Inorder"<<endl;
		inordertreewalk(root);
		cout<<endl;
		cout << "Postorder"<<endl;
		postordertreewalk(root);
		cout<<endl;
}