#include<iostream>
#include<algorithm>
using namespace std;

int left(int i){ return (i+1)*2 -1; }
int right(int i){ return (i+1)*2+1 -1; }
int parent(int i){ return (i+1)/2 -1; }

int n;

void maxHeapify(int *a, int i){
        int l = left(i);
        int r = right(i);
        int largest;
        if(l<n && a[l]>a[i]) largest = l;
        else largest = i;
        if(r<n && a[r]>a[largest]) largest = r;

        if(largest!=i){
                swap(a[i],a[largest]);
                maxHeapify(a,largest);
        }
}

void buildMaxHeap(int *a){
        for(int i=(n-1)/2;i>=0;i--)
                maxHeapify(a,i);
}

int main(){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        buildMaxHeap(a);

        for(int i=0;i<n;i++) cout<<" "<<a[i];
        cout<<endl;
        return 0;
}
