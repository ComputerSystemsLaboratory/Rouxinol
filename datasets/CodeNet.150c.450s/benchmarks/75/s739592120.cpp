#include <iostream>
using namespace std;
long int A[500000];

int n;
int left(int i){
    return 2*i;
}
int right(int i){
    return 2*i+1;
}
void maxHeapify(int i){
    int l = left(i);
    int r = right(i);
    int large;
    if(l<=n&&A[l]>A[i]){
        large = l;
    }else{ 
        large = i;
    }    
    if(r<=n&&A[r]>A[large]){
        large = r;
    }
    if(large!=i){
        swap(A[i],A[large]);
        maxHeapify(large);
    }
}

void buildMaxHeap(){
    for(int i=n/2;i>0;i--)
        maxHeapify(i);
}

int main(){
    cin>>n;
    A[0]=0;
    for(int i=1;i<=n;i++)
	cin>>A[i];
    buildMaxHeap();
    for(int i=1;i<n;i++)
	cout<<" "<<A[i];
    cout<<" "<<A[n]<<"\n";
    return 0;
}