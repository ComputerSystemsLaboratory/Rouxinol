#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
static const int MAX=2000005;

int Heap[MAX];
int ppp;

void heapify2(int i){
    if(i/2>0&&Heap[i]>Heap[i/2]){
        swap(Heap[i],Heap[i/2]);
        heapify2(i/2);
    }
    return;
}

void insertkey(int key){
    ppp++;
    Heap[ppp]=key;
    heapify2(ppp);
    return;
}

void heapify(int i){
    int largest=i;
    if(2*i<=ppp&&Heap[largest]<Heap[2*i])largest=2*i;
    if(2*i+1<=ppp&&Heap[largest]<Heap[2*i+1])largest=2*i+1;
    if(i!=largest){
        swap(Heap[largest],Heap[i]);
        heapify(largest);
    }
    return;
}

int extract(){
    int maxi=Heap[1];
    Heap[1]=Heap[ppp];
    heapify(1);
    ppp--;
    return maxi;
}

int main(){
    ppp=0;
    char s[10];
    while(1){
    scanf("%s",s);
    if(s[0]=='i'){int key;scanf("%d",&key);insertkey(key);}
    else if(s[1]=='x'){printf("%d\n",extract());}
    else if(s[1]=='n')return 0;
    }
    return 0;
}
