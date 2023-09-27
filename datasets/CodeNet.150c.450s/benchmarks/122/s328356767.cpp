#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX=2000000;
const int INFTY=(1<<30);

int H, A[MAX];

void maxHeapify(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;

    if(l<=H && A[l]>A[i]) largest=l;
    else largest=i;
    if(r<=H && A[r]>A[largest]) largest=r;

    if(i!=largest){
        swap(A[i],A[largest]);
        maxHeapify(largest);
    }
}

int extract(){
    int maxv;
    if(H<1) return -INFTY;
    maxv=A[1];
    A[1]=A[H--];
    maxHeapify(1);
    return maxv;
}

void increaseKey(int i, int key){
    if(key<A[i]) return;
    A[i]=key;
    while(i>1 && A[i/2]<A[i]){
        swap(A[i],A[i/2]);
        i=i/2;
    }
}

void insert(int key){
    H++;
    A[H]=-INFTY;
    increaseKey(H,key);
}

int main(){
    H=0;
    while(true){
        string s; cin >> s;
        if(s=="end") break;
        if(s=="insert"){
            int key; cin >> key;
            insert(key);
        }
        if(s=="extract"){
            printf("%d\n", extract());
        }
    }
}
