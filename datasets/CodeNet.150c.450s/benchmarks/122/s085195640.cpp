#include<bits/stdc++.h>
#define INFTY 1<<30
using namespace std;
int h,heap[2000001];
void maxHeapify(int i){
    int left,right,largest;
    left=i*2;
    right=left+1;
    if(left<=h&&heap[i]<heap[left]) largest=left;
    else largest=i;
    if(right<=h&&heap[largest]<heap[right]) largest=right;
    if(largest!=i){
        swap(heap[i],heap[largest]);
        maxHeapify(largest);
    }
}
void push(int key){
    h++;
    int i=h;
    heap[i]=-INFTY;
    if(key<heap[i]) return;
    heap[i]=key;
    while(i>1&&heap[i/2]<heap[i]){
        swap(heap[i/2],heap[i]);
        i=i/2;
    }
}
int pop(){
    int maxv;
    if(h<1) return -INFTY;
    maxv=heap[1];
    heap[1]=heap[h];
    h--;
    maxHeapify(1);
    return maxv;
}
int main(){
    scanf("%d",&h);
    string com;
    int k;
    while(cin>>com){
        if(com=="insert"){
            scanf("%d",&k);
            push(k);
        }else if(com=="extract"){
            printf("%d\n",pop());
        }
    }
    return 0;
}