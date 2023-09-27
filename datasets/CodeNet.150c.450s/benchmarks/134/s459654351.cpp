#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int parent ,left ,right ;
};
int getroot(node);
const int nil = -1;
int D[30],H[30];
node N[30];
void setdepth(int,int);
int setheight(int);
void preorder(int);
void inorder(int);
void postorder(int);

int main(){
	int n;
	cin >>n;
	for(int i=0;i<n;i++) N[i].parent = N[i].left = N[i].right = nil;
	for(int i=0;i<n;i++){
		int id;
		cin >> id;
		cin >> N[id].left >> N[id].right;
		if(N[id].left != nil) N[N[id].left].parent = id;
		if(N[id].right != nil) N[N[id].right].parent = id;
	}
	//cerr << "input was succeeded." << endl;
	int root = getroot(N[0]);
	cout << "Preorder" << endl;
	preorder(root);
	cout << endl << "Inorder" << endl;
	inorder(root);
	cout << endl << "Postorder" << endl;
	postorder(root);
	cout << endl;

}

int getroot(node x){
	int x_id = 0;
	while(x.parent != nil){
		x_id = x.parent;
		x = N[x_id];
	}
	//cerr << "root:" << x_id << endl;
	return x_id;
}

void setdepth(int id,int d){
	D[id] = d;
	if(N[id].left != nil) setdepth(N[id].left,d+1);
	if(N[id].right != nil) setdepth(N[id].right,d+1);
}

int setheight(int id){
		int l,r;
		l = r = 0;
		if(N[id].left != nil) l = setheight(N[id].left)+1;
		if(N[id].right != nil) r = setheight(N[id].right)+1;
		return H[id] = max(l,r);
}

void preorder(int id){
	cout << " " << id;
	if(N[id].left != nil) preorder(N[id].left);
	if(N[id].right != nil) preorder(N[id].right);
}

void inorder(int id){
	if(N[id].left != nil) inorder(N[id].left);
	cout << " " << id;
	if(N[id].right != nil) inorder(N[id].right);
}

void postorder(int id){
	if(N[id].left != nil) postorder(N[id].left);
	if(N[id].right != nil) postorder(N[id].right);
	cout << " " << id;
}