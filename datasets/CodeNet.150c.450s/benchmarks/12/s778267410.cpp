#include <iostream>
using namespace std;
int n,id,k;
typedef struct{
	int key;
	int parent;//???
	int lch;//????????????id
	int rch;//????????????id
}NODE;
NODE node[251];

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >>node[i].key;
		if(i/2>0){
			node[i].parent=i/2;
		}else{
			node[i].parent=-1;
		}
		if(2*i<=n){
			node[i].lch=2*i;
		}else{
			node[i].lch=-1;
		}
		if(2*i+1<=n){
			node[i].rch=2*i+1;
		}else{
			node[i].rch=-1;
		}
	}
	
	for(int i=1;i<=n;i++){
		cout <<"node " <<i<<": ";
		cout <<"key = "<<node[i].key<<", ";
		if(node[i].parent!=-1)
			cout <<"parent key = "<<node[node[i].parent].key<<", ";
		if(node[i].lch!=-1)
			cout <<"left key = "<<node[node[i].lch].key<<", ";
		if(node[i].rch!=-1)
			cout <<"right key = "<<node[node[i].rch].key<<", ";
		cout << endl;
	}

}