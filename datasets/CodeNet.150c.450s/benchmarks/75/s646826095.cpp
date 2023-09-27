#include<bits/stdc++.h>
using namespace std;
int h,heap[500001];
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
int main(){
    scanf("%d",&h);
    for(int i=1;i<=h;++i) scanf("%d",&heap[i]);
    for(int i=h/2;i>0;--i) maxHeapify(i);
    for(int i=1;i<=h;++i) printf(" %d",heap[i]);
    putchar('\n');
    return 0;
}