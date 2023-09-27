#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
struct Node{
        int value;
        Node *left,*right,*parent;
};
Node *nil,*root;
void print(Node *now,bool sign){
        if(now==nil)return;
        if(!sign)
                cout<<" "<< now->value;
        print(now->left,sign);
        if(sign)
                cout <<" "<< now->value ;
        print(now->right,sign);
}
string find(int x){
        Node *now=root;
        while(now!=nil){
                if(now->value==x)
                        return "yes";
                else if(now->value > x)
                        now=now->left;
                else
                        now=now->right;
        }
        return "no";
}
void insert(int x){
        Node *now;
        now=root;
        while(now!=nil){
                if(x>now->value){
                        if(now->right==nil)break;
                        now=now->right;
                }
                else{
                        if(now->left==nil)break;
                        now=now->left;
                }
        }
        Node *in;
        in=(Node *)malloc(sizeof(Node));
        if(now->value < x)
                now->right=in;
        else now->left=in;
        in->parent=now;
        in->left=in->right=nil;
        in->value=x;
        return;
}
int main(){
        nil=(Node *)malloc(sizeof(Node));
        root=(Node *)malloc(sizeof(Node));
        root->left=root->right=nil;
        root->parent=root;
        nil->parent=root;
        nil->left=nil->right=nil;
        int N,x;
        string str;
        cin >> N;
        bool signal=true;
        for(int i=0 ; i<N ; i++ ){
                cin >> str;
                if(str=="insert"){
                        cin >> x;
                        if(signal){
                                signal=false;
                                root->value=x;
                        }else
                                insert(x);
                }else if(str=="find"){
                        cin >> x;
                        cout << find(x) << endl;
                }else{
                        print(root,1);
                        cout << endl;
                        print(root,0);
                        cout << endl;
                }
        }
        return 0;
}
