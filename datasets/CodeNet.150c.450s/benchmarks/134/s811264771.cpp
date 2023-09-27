#include <iostream>
using namespace std;

class tree{public: int id,left,right; }data[25];

void Pre(int i){
	cout<<" "<<data[i].id;
	if(data[i].left!=-1)	Pre(data[i].left);
	if(data[i].right!=-1)	Pre(data[i].right);
}
void In(int i){
	if(data[i].left!=-1)	In(data[i].left);
	cout<<" "<<data[i].id;
	if(data[i].right!=-1)	In(data[i].right);
}
void Out(int i){
	if(data[i].left!=-1)	Out(data[i].left);
	if(data[i].right!=-1)	Out(data[i].right);
	cout<<" "<<data[i].id;
}

int main(){
	int n;	cin>>n;
	bool root[n];
	for(int i=0;i<n;i++)	root[i]=true;
	int no;
	for(int i=0;i<n;i++){
		cin>>no;	data[no].id=no;
		cin>>data[no].left>>data[no].right;
		root[data[no].left]=false;
		root[data[no].right]=false;
	}
	for(int i=0;i<n;i++){
		if(root[i]){
			cout<<"Preorder"<<endl;
			Pre(i);
			cout<<"\nInorder"<<endl;
			In(i);
			cout<<"\nPostorder"<<endl;
			Out(i);
			cout<<endl;
			return 0;
		}
	}
	return 0;
}		