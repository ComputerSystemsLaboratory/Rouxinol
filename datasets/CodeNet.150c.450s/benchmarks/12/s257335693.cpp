#include <bits/stdc++.h>

#define NIL -1
#define INF 1000000001

using namespace std;

struct node{
    int key,parent,left,right;
};

int main(){
    int size_of_H;
    int temp;
    scanf("%d",&size_of_H);
    vector<node> heap_array(size_of_H+1,node{-1,-1,-1,-1});
    
    for(int i = 1;i <= size_of_H;i++){
        scanf("%d",&temp);    
        heap_array[i].key = temp;
    }
    int i = 1;
    while(i <= size_of_H ){
        if(i != 1) heap_array[i].parent = i/2;
        if(2*i  < size_of_H + 1) heap_array[i].left = 2*i;
        if(2*i+1< size_of_H + 1) heap_array[i].right = 2*i+1;
        i++;
    }

    for(int i = 1;i <= size_of_H;i++){
        printf("node %d: key = %d, ",i,heap_array[i].key);
        if(heap_array[i].parent > 0) printf("parent key = %d, ",heap_array[heap_array[i].parent].key);
        if(heap_array[i].left > 0) printf("left key = %d, ",heap_array[heap_array[i].left].key);
        if(heap_array[i].right > 0) printf("right key = %d, ",heap_array[heap_array[i].right].key);
        printf("\n");
    }
    return 0;
}
