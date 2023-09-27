#include <iostream>
using namespace std;

struct node{
    int parent,left,right;
}nodes[25];

int n,tag[25];

void pre(int r){
    cout<<" "<<r;
    if(nodes[r].left!=-1)pre(nodes[r].left);
    if(nodes[r].right!=-1)pre(nodes[r].right);
}

void in(int r){
    if(nodes[r].left!=-1)in(nodes[r].left);
    cout<<" "<<r;
    if(nodes[r].right!=-1)in(nodes[r].right);
}

void post(int r){
    if(nodes[r].left!=-1)post(nodes[r].left);
    if(nodes[r].right!=-1)post(nodes[r].right);
    cout<<" "<<r;
}

int main()
{
    cin>>n;
    int i,r;
    for(i=0;i<n;i++){nodes[i].parent=-1;}
    for(i=0;i<n;i++){
        int ii,l,r;
        cin>>ii>>l>>r;
        nodes[ii].left=l;
        nodes[ii].right=r;
        if(l!=-1)nodes[l].parent=ii;
        if(r!=-1)nodes[r].parent=ii;
    }
    for(i=0;i<n;i++){
        if(nodes[i].parent==-1)r=i;
    }
    cout<<"Preorder"<<endl;pre(r);cout<<endl;
    cout<<"Inorder"<<endl;in(r);cout<<endl;
    cout<<"Postorder"<<endl;post(r);cout<<endl;
    return 0;
}