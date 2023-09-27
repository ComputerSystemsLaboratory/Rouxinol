#include<bits/stdc++.h>
using namespace std;
struct Node{
	   int f,l,r,id;
};
struct Node T[30];
int n,id,x,y;
vector<int> a;
void Postorder(Node u){
	 if (u.id==-1)
	    return;
	 if (u.l!=-1)
	    Postorder(T[u.l]);
	 if (u.r!=-1)
	    Postorder(T[u.r]);
	 a.push_back(u.id);
}
void Inorder(Node u){
	 if (u.id==-1)
	    return;
	 if (u.l!=-1)
	    Inorder(T[u.l]);
	 a.push_back(u.id);
	 if (u.r!=-1)
	    Inorder(T[u.r]);
}
void preorder(Node u){
     if (u.id==-1)
	    return;
	 a.push_back(u.id);
	 if (u.l!=-1)
	    preorder(T[u.l]);
	 if (u.r!=-1)
	    preorder(T[u.r]);
}
int main(){
    cin>>n;
    for (int i=0; i<n; i++)
        T[i].f=T[i].l=T[i].r=T[i].id=-1;
    for (int i=0; i<n; i++){
    	cin>>id>>x>>y;
    	T[id].id=id; T[id].l=x; T[id].r=y;
    	if (x!=-1)
    	   T[x].f=id;
    	if (y!=-1)
    	   T[y].f=id;
	}
	Node root;
	for (int i=0; i<n; i++)
	    if (T[i].f==-1){
	    	root=T[i]; break;
		}
    cout<<"Preorder"<<endl;
    preorder(root);
    for (vector<int>::iterator it=a.begin(); it!=a.end(); it++)
        cout<<" "<<*it;
    cout<<'\n';
    a.clear();
    cout<<"Inorder"<<endl;
    Inorder(root);
    for (vector<int>::iterator it=a.begin(); it!=a.end(); it++)
        cout<<" "<<*it;
    cout<<'\n';
    a.clear();
    cout<<"Postorder"<<endl;
    Postorder(root);
    for (vector<int>::iterator it=a.begin(); it!=a.end(); it++)
        cout<<" "<<*it;
    cout<<'\n';
	return 0;
} 
