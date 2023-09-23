#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int tree[500005],n;

int left(int i){return 2*i;}
int right(int i){return 2*i+1;}
void buildMaxHeap();
void maxHeapify(int);

void buildMaxHeap(){
    for(int i=n/2;i>0;i--)
        maxHeapify(i);
}

void maxHeapify(int i){
    int l = left(i),r = right(i);
    int largest;
    if(l<=n && tree[l]>tree[i])
        largest=l;
    else
        largest=i;
    if(r<=n && tree[r]>tree[largest])
        largest=r;
    if(largest != i){
        swap(tree[i],tree[largest]);
        maxHeapify(largest);
    }

}

int main(){
    while(cin>>n){
        for(int i=1;i<=n;i++)
            cin>>tree[i];
        buildMaxHeap();
        for(int i=1;i<=n;i++)
            cout<<" "<<tree[i];
        cout<<endl;
    }
}
