#include<iostream>
using namespace std;

#define N 25

class Node {
public:
    int parent = -1;
    int left;
    int right;
};

void Preorder(Node *, int);
void Inorder(Node *, int);
void Postorder(Node *, int);

int main() {

    int n;
    cin>>n;
    int id, l, r;
    Node list[25];
    
    for(int i = 0; i < n;  i++) {
        cin>>id>>l>>r;
        list[id].left = l;
        list[id].right = r;
        if(l != -1) {
            list[l].parent = id;
        }
        if(r != -1) {
            list[r].parent = id;
        }
    }
    
    int root;
    for(root = 0; list[root].parent != -1; root++);
    
    cout<<"Preorder"<<endl;
    Preorder(list, root);
    cout<<endl;
    
    cout<<"Inorder"<<endl;
    Inorder(list, root);
    cout<<endl;
    
    cout<<"Postorder"<<endl;
    Postorder(list, root);
    cout<<endl;


  return 0;
}

void Preorder(Node *list, int a) {
    cout<<' '<<a;
    if(list[a].left != -1) Preorder(list, list[a].left);
    if(list[a].right != -1) Preorder(list, list[a].right);
}

void Inorder(Node *list, int a) {
    if(list[a].left != -1) Inorder(list, list[a].left);
    cout<<' '<<a;
    if(list[a].right != -1) Inorder(list, list[a].right);
}

void Postorder(Node *list, int a) {
    if(list[a].left != -1) Postorder(list, list[a].left);
    if(list[a].right != -1) Postorder(list, list[a].right);
    cout<<' '<<a;
}

