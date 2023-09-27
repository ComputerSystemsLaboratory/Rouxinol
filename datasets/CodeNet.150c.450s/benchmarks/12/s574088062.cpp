#include<bits/stdc++.h>
using namespace std;

int parent(int i){ return i/2; }
int left(int i){ return i*2; }
int right(int i){ return i*2+1; }

int main(){
    int H, tree[100001];
    scanf("%d",&H);
    for( int i = 1; i <= H; ++i){
        scanf("%d",&tree[i]);
    }
    for( int i = 1; i <= H; ++i){
        printf("node %d: key = %d, ",i,tree[i]);
        if(parent(i)>=1) printf("parent key = %d, ",tree[parent(i)]);
        if(left(i)<=H) printf("left key = %d, ",tree[left(i)]);
        if(right(i)<=H) printf("right key = %d, ",tree[right(i)]);
        putchar('\n');
    }
    return 0;
}

