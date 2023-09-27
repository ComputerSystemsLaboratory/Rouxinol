#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

class vertex{
public:
    int id;
    int parent = -1;
    int left = -1;
    int right = -1;
};
bool operator<(const vertex &a, const vertex &b){
    return a.id<b.id;
}

void preorder(vertex *v, int i){
    cout << " " << v[i].id;
    if(v[i].left>=0) preorder(v, v[i].left);
    if(v[i].right>=0) preorder(v, v[i].right);
}
void inorder(vertex *v, int i){
    if(v[i].left>=0) inorder(v, v[i].left);
    cout << " " << v[i].id;
    if(v[i].right>=0) inorder(v, v[i].right);
}
void postorder(vertex *v, int i){
    if(v[i].left>=0) postorder(v, v[i].left);
    if(v[i].right>=0) postorder(v, v[i].right);
    cout << " " << v[i].id;
}

int main(){
    int n;
    vertex v[25];
    cin >> n;
    for(int i=0;i<n;i++){
        int id, l, r;
        cin >> id >> l >> r;
        v[i].id=id;
        v[i].left=l;
        v[i].right=r;
    }
    sort(v, v+n);
    for(int i=0;i<n;i++){
        int l = v[i].left;
        int r = v[i].right;
        if(l>=0){
            v[l].parent=i;
        }
        if(r>=0){
            v[r].parent=i;
        }
    }

    int p;
    for(int i=0;i<n;i++){
        if(v[i].parent<0){
            p=i;
            break;
        }
    }

    cout << "Preorder" << endl;
    preorder(v, p);
    cout << endl;

    cout << "Inorder" << endl;
    inorder(v, p);
    cout << endl;

    cout << "Postorder" << endl;
    postorder(v, p);
    cout << endl;
    
    return 0;
}
