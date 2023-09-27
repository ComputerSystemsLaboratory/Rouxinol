#include <iostream>
#include <stdio.h>

using namespace std;
struct node{
    node *parent;
    node *left;
    node *right;
    int key;
};

int main(){
    int n,tmp;
    cin >> n;
    int *l;
    l = new int[n+1];
    for(int i = 1; i <=n; ++i){
        cin >> tmp;
        l[i] = tmp;
    }
    for(int i = 1; i <=n; ++i){
        printf("node %d: key = %d, ",i,l[i]);
        if(i/2 > 0){
            printf("parent key = %d, ",l[i/2]);
        }
        if(n >= 2*i){
            printf("left key = %d, ",l[2*i]);
        }
        if(n >= 2*i+1){
            printf("right key = %d, ",l[2*i+1]);
        }
        printf("\n");
    }
}

