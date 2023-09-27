#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#define LEN 2000000
#include <algorithm>

#define INF (1<<30)
using namespace std;


int parent(int i) {return i/2;}
int left(int i) {return i*2;}
int right(int i) {return i*2+1;}

int n,A[LEN+1];
void maxHeapify(int i)
{
    int left=2*i;
    int right=2*i+1;
    int largest=i;

    if(left<=n && A[left]>A[i]) largest=left;
    if(right<=n && A[right]>A[largest]) largest=right;

    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeapify(largest);
    }
}

void heapIncreaseKey(int i,int key)

{
    if(key<A[i]) return;
    A[i]=key;
    while(i>1 && A[parent(i)]<A[i]){
        swap(A[i],A[parent(i)]);
        i=parent(i);
    }
}

void insert(int key)
{
    n++;
    A[n]=-INF;
    heapIncreaseKey(n,key);
}

int heapExtractMax()
{
    if(n<1) return -INF;
    int max=A[1];
    A[1]=A[n--];
    maxHeapify(1);
    return max;
}


int main()
{
    int key;
    char com[10];
    while(1){
        scanf("%s", com);
        if(com[0]=='e' && com[1]=='n') break;
        if(com[0]=='i'){
            scanf("%d",&key);
            insert(key);
        }
        else printf("%d\n",heapExtractMax());
    }
    return 0;
}

