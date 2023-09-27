#include<iostream>
#include<algorithm>
using namespace std;
int H,A[500001];
void maxHeapify(int A[],int i){
    int l=2*i,r=2*i+1,largest;
    if(l<=H&&A[l]>A[i]) largest=l;
    else largest=i;
    if(r<=H&&A[r]>A[largest]) largest=r;
    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeapify(A,largest);
    }
}
void buildHeap(int A[]){
    for(int i=H/2;i>0;i--) maxHeapify(A,i);
}
int main(){
    cin>>H;
    for(int i=1;i<=H;i++)cin>>A[i];
    buildHeap(A);
    for(int i=1;i<=H;i++)cout<<" "<<A[i];
    cout<<endl;
    return 0;
}
