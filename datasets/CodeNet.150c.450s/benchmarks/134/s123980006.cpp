//??即?????????
#include<iostream>
#include <vector>
using namespace std;
const int INVALID = -2;
enum node_type {
	root=0,
	internal_node,
	leaf
};
const char * typemsg[3] = {"root","internal node","leaf"};
class btree{
public:
	vector<int> children;
	int sibling;
	int parent;
	int depth;
	int height;
	int type;	//0:root,1:internal node, 2:leaf
	btree():parent(-1),sibling(-1),depth(INVALID),height(0),type(internal_node){
	}
	int degree(){
		return (int)children.size();
	}

	void print(){
		//parent = -1, sibling = -1, degree = 2, depth = 0, height = 3, root
		//parent = 1, depth = 2, leaf, []
		cout << "parent = " << parent << ", sibling = " << sibling
			<< ", degree = "  << degree() << ", depth = " << depth << ", height = "  << height 
			<< ", " << typemsg[type];
	}
};

int TraverseSetDepthHeight(vector<btree> & T,int idx,int depth){
	vector<int> & children = T[idx].children;
	int height = 0;
	for(int i=0;i<(int)children.size();++i){
		if (children[i]>=0) {
			T[children[i]].depth = depth;
			int h = TraverseSetDepthHeight(T,children[i],depth+1);
			height = std::max(h,height);
		}
	}
	return	(T[idx].height = height)+1;
}

void PrintID(vector<btree> & T,int idx,const char* & space) {
	cout << space << idx;
}

void TraversePrint_Preorder(vector<btree> & T,int idx,const char* & space) {
	PrintID(T,idx,space);
	if (T[idx].children.size()>=1 && T[idx].children[0] >= 0) {
		TraversePrint_Preorder(T,T[idx].children[0],space);
	}
	if (T[idx].children.size()>=2 && T[idx].children[1] >= 0) {
		TraversePrint_Preorder(T,T[idx].children[1],space);
	}
}
void TraversePrint_Inorder(vector<btree> & T,int idx,const char* & space) {
	if (T[idx].children.size()>=1 && T[idx].children[0] >= 0) {
		TraversePrint_Inorder(T,T[idx].children[0],space);
	}
	PrintID(T,idx,space);
	if (T[idx].children.size()>=2 && T[idx].children[1] >= 0) {
		TraversePrint_Inorder(T,T[idx].children[1],space);
	}
}
void TraversePrint_Postorder(vector<btree> & T,int idx,const char* & space) {
	if (T[idx].children.size()>=1 && T[idx].children[0] >= 0) {
		TraversePrint_Postorder(T,T[idx].children[0],space);
	}
	if (T[idx].children.size()>=2 && T[idx].children[1] >= 0) {
		TraversePrint_Postorder(T,T[idx].children[1],space);
	}
	PrintID(T,idx,space);
}

int main(){
	vector<btree> T;
	int n,k;
	int left,right;
	cin >> n;
	T.resize(n);
	for(int i=0;i<n;++i) {
		cin >> k >> left >> right;
		btree & t = T[k];
		int child=0;
		if (left >= 0 || right >= 0){
			child = 2;
		}
		if (child>0) {
			t.children.resize(child);
			t.children[0] = left;
			t.children[1] = right;
		}
		vector<int>& children = T[k].children;
		if (children.size()==0) {
			t.height = 0;
			T[k].type = leaf;
		}
		else {
			for(int j=0;j<(int)children.size();++j){
				if (children[j]>=0) {
					T[children[j]].parent = k;
				}
			}
		}
	}
	for(int i=0;i<n;++i) {
		if (T[i].parent == -1){
			T[i].type = root;
			T[i].depth = 0;
			TraverseSetDepthHeight(T,i,1);

			cout << "Preorder" << std::endl;
			const char* space=" ";
			TraversePrint_Preorder(T,i,space);
			cout << std::endl;

			cout << "Inorder" << std::endl;
			TraversePrint_Inorder(T,i,space);
			cout << std::endl;

			cout << "Postorder" << std::endl;
			TraversePrint_Postorder(T,i,space);
			cout << std::endl;
			break;
		}
	}
}