#include<iostream>
using namespace std;

static const int MAX = 100000;

struct Node{
        int parent, left, right;
};

Node node[MAX];

void print_preorder(int i){
        cout<<" "<<i;
        if(node[i].left!=-1) print_preorder(node[i].left);
        if(node[i].right!=-1) print_preorder(node[i].right);

}

void print_inorder(int i){
        if(node[i].left!=-1) print_inorder(node[i].left);
        cout<<" "<<i;
        if(node[i].right!=-1) print_inorder(node[i].right);

}

void print_postorder(int i){
        if(node[i].left!=-1) print_postorder(node[i].left);
        if(node[i].right!=-1) print_postorder(node[i].right);
        cout<<" "<<i;

}

int main(){
        int n,a,tmp;
        cin>>n;
        for(int i=0;i<n;i++){
                node[i].parent = -1;
                node[i].left = -1;
                node[i].right = -1;
        }
        for(int i=0;i<n;i++){
                cin>>a;
                cin>>node[a].left;
                if(node[a].left!=-1) node[node[a].left].parent = a;
                cin>>node[a].right;
                if(node[a].right!=-1) node[node[a].right].parent = a;
        }
        tmp = 0;
        while(node[tmp].parent!=-1)
                tmp = node[tmp].parent;

        cout<<"Preorder"<<endl;
        print_preorder(tmp);
        cout<<endl;
        cout<<"Inorder"<<endl;
        print_inorder(tmp);
        cout<<endl;
        cout<<"Postorder"<<endl;
        print_postorder(tmp);
        cout<<endl;

        return 0;
}
