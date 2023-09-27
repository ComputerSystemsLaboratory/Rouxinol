#include<iostream>
#include<vector>
using namespace std;

void Preorder(vector< vector<int> > &T,int root){
	cout <<" "<< root;
	if(T[root][0]!=-1) Preorder(T,T[root][0]);
	if(T[root][1]!=-1) Preorder(T,T[root][1]);
	return;
}

void Inorder(vector< vector<int> > &T,int root){
	if(T[root][0]!=-1) Inorder(T,T[root][0]);
	cout <<" "<< root;
	if(T[root][1]!=-1) Inorder(T,T[root][1]);
	return;
}

void Postorder(vector< vector<int> > &T,int root){
	if(T[root][0]!=-1) Postorder(T,T[root][0]);
	if(T[root][1]!=-1) Postorder(T,T[root][1]);
	cout <<" "<< root;
	return;
}

int main(){
	int n,i,j,k,d,e;
	cin >> n;
	
	vector< vector<int> > T(n);
	vector<int> check(n,0); 
	
	for (i=0;i<n;i++){
		cin >> k;
		for (j=0;j<2;j++){
			cin >> e;
			T[k].push_back(e);
			if(e!=-1) check[e]=1;
		}
	}
	
	int r;
	for (i=0;i<n;i++){
		if(check[i]==0){
			r=i;
			break;
		}
	}
	cout << "Preorder" <<endl;
	Preorder(T,r);
	cout <<endl;
	cout << "Inorder" <<endl;
	Inorder(T,r);
	cout <<endl;
	cout << "Postorder" <<endl;
	Postorder(T,r);
	cout <<endl;
	
	return 0;
}