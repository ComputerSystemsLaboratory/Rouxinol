#include<bits/stdc++.h>
#define parent(i) i/2
#define left(i) i*2
#define right(i) i*2+1
using namespace std;
int main(){
    int h;
    scanf("%d",&h);
    int heap[h+1];
    for(int i=1;i<=h;++i) scanf("%d",&heap[i]);
    for(int i=1;i<=h;++i){
        printf("node %d: key = %d, ",i,heap[i]);
        if(parent(i)>0&&parent(i)<=h) printf("parent key = %d, ",heap[parent(i)]);
        if(left(i)>0&&left(i)<=h) printf("left key = %d, ",heap[left(i)]);
        if(right(i)>0&&right(i)<=h) printf("right key = %d, ",heap[right(i)]);
        putchar('\n');
    }
    return 0;
}