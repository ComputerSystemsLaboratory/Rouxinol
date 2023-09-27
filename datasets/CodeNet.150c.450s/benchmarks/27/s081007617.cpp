#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct node{
    int key;
    node* parent,*left,*right;
};
node *root=NULL;
node * pre;
void Insert(int key){
    node * temp=new node;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL){
        root=temp;
        return ;
    }
    else{
        pre=root;
        while(1){
            if (key<pre->key){
                if (pre->left==NULL){
                    pre->left=temp;
                    temp->parent=pre;
                    return;
                }
                else
                    pre=pre->left;
            }
            else if(key > pre->key){
                if (pre->right==NULL){
                    pre->right=temp;
                    temp->parent=pre;
                    return;
                }
                else
                    pre=pre->right;
            }
            else
                return;
        }
    }
}
void Print_in(node* r){
    if(r->left!=NULL){
        Print_in(r->left);
    }
    cout<<" "<<r->key;
    if(r->right!=NULL){
        Print_in(r->right);
    }

}
void Print_pre(node *r){
    cout<<" "<<r->key;
    if(r->left!=NULL){
        Print_pre(r->left);
    }
    if(r->right!=NULL){
        Print_pre(r->right);
    }
}
void Print(node * r){
    Print_in(r);
    cout<<endl;
    Print_pre(r);
    cout<<endl;
}
int main(){
    int n;
    string cmd;
    int key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cmd;
        if(cmd[0]=='i'){
            cin>>key;
            Insert(key);
        }
        else if(cmd[0]=='p'){
            Print(root);
        }
    }
    return 0;
}

