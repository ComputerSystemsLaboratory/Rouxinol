#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    node():p(-1),l(-1),r(-1){}
    int p, l, r;
};

void preorder(node t[], int id) {
    if(id==-1) return;
    cout<<' '<<id;
    preorder(t, t[id].l);
    preorder(t, t[id].r);
}
void inorder(node t[], int id) {
    if(id==-1) return;
    inorder(t, t[id].l);
    cout<<' '<<id;
    inorder(t, t[id].r);
}
void postorder(node t[], int id) {
    if(id==-1) return;
    postorder(t, t[id].l);
    postorder(t, t[id].r);
    cout<<' '<<id;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    node t[25];
    cin>>n;
    for(int i=0; i<n; i++) {
        int id, l, r;
        cin>>id>>l>>r;
        t[id].l=l;
        t[id].r=r;
        if(l!=-1) t[l].p=id;
        if(r!=-1) t[r].p=id;
    }
    int root;
    for(root=0; root<n&&t[root].p!=-1; root++);
    cout<<"Preorder\n";
    preorder(t, root);
    cout<<"\nInorder\n";
    inorder(t, root);
    cout<<"\nPostorder\n";
    postorder(t, root);
    cout<<'\n';
    return 0;
}