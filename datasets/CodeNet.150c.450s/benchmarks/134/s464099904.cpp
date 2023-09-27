#include <iostream>

using namespace std;
#define MAX 26
#define NIL -1
struct Node{
    int p,l,r;
};
Node T[MAX];
int n;
void preTW(int u){
    if(u!=NIL){
        cout<<" "<<u;
        preTW(T[u].l);
        preTW(T[u].r);
    }
}
void inTW(int u){
    if(u!=NIL){

        inTW(T[u].l);
        cout<<" "<<u;
        inTW(T[u].r);
    }
}
void postTW(int u){
    if(u!=NIL){

        postTW(T[u].l);
        postTW(T[u].r);
        cout<<" "<<u;
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        T[i].p = T[i].l = T[i].r = NIL;
    }
    for(int i=0;i<n;i++){
        int id,l,r;
        cin>>id>>l>>r;
        T[id].l = l;
        T[id].r = r;
        if(l!=NIL) T[l].p = id;
        if(r!=NIL) T[r].p = id;
    }
    cout<<"Preorder"<<endl;
    int r;
    for(int i=0;i<n;i++){
        if(T[i].p==NIL) r=i;
    }
    preTW(r);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inTW(r);
    cout<<endl;
    cout<<"Postorder"<<endl;
    postTW(r);
    cout<<endl;
    return 0;
}

