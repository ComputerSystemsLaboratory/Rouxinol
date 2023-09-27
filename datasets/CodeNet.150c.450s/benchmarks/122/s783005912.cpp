#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace  std;
const int N=2e6+5;
#define INFTY (1<<30)
int h,a[N];
void maxheapify(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=h&&a[l]>a[i]) largest=l;
    else largest=i;
    if(r<=h&&a[r]>a[largest]) largest=r;
    if(largest!=i){
        swap(a[i],a[largest]);
        maxheapify(largest);
    }
}
int extract(){
    int maxv;
    if(h<1) return -INFTY;
    maxv=a[1];
    a[1]=a[h--];
    maxheapify(1);
    return maxv;
}
void increasekey(int i,int key){
    if(key<a[i]) return;
    a[i]=key;
    while(i>1&&a[i/2]<a[i]){
        swap(a[i],a[i/2]);
        i/=2;
    }
}
void insert(int key){
    h++;
    a[h]=-INFTY;
    increasekey(h, key);
}
int main(){
    int key;
    char com[10];
    while(1){
        scanf("%s",com);
        if(com[0]=='e'&&com[1]=='n') break;
        if(com[0]=='i'){
            scanf("%d",&key);
            insert(key);
        }
        else
            printf("%d\n",extract());
    }
    return 0;
}