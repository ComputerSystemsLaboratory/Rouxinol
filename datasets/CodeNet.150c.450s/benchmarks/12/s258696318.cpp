#include<cstdio>
#include<iostream>
#include<string>
#include<climits>

typedef int Node;
class CompleteBinaryTree {
    Node* Tree;
    Node nil = -2000000001;
    int size;
    
    public :CompleteBinaryTree(int c){
        size = c;
        Tree = new Node[size+1];
        for(int i =1;i <= c;++i) Tree[i] = nil;
    }
    
    void AddChild(int c, int n) {
            Tree[n] = c;
	}
    
    int GetParent(int n){
        return (n/2) != 0 ? Tree[n/2]:nil;
    }
    
    int GetRightChild(int n){
        return (2*n+1) <= size ? Tree[2*n+1]:nil;
    }

    int GetLeftChild(int n){
        return (2*n) <= size ? Tree[2*n]:nil;
    }
    
    void print(int n){
        printf("node %d: key = %d, ",n,Tree[n]);
        if(GetParent(n) != nil) printf("parent key = %d, ",GetParent(n));
        if(GetLeftChild(n) != nil) printf("left key = %d, ",GetLeftChild(n));
        if(GetRightChild(n) != nil) printf("right key = %d, ",GetRightChild(n));
        printf("\n"); 
    }
};

int main(){
    int n,k;
    CompleteBinaryTree *cbt;
    scanf("%d",&n);
    cbt = new CompleteBinaryTree(n);
    for(int i = 1;i <= n;++i){
        scanf("%d",&k);
	    cbt -> AddChild(k,i);
    }
    for(int i = 1;i <= n;++i) cbt -> print(i);
    
}



