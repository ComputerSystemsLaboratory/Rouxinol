#include<iostream>
using namespace std;
#define HMAX 500000

int parent(int i){
    return i/2;
}

int left(int i){
    return i*2;
}

int right(int i){
    return i*2+1;
}

void maxHeapify(int h[],int H,int i){
    int l,r,largest=i;
    l=left(i);
    r=right(i);
    if(l<=H&&h[l]>h[i]) largest=l;
    if(r<=H&&h[r]>h[largest]) largest=r;
    if(largest!=i){
        swap(h[i],h[largest]);
        maxHeapify(h,H,largest);
    }
}

int main(){
    int H,h[HMAX+1];
    cin>>H;
    for(int i=1;i<=H;i++) cin>>h[i];

    for(int i=H/2;i>=1;i--){
        maxHeapify(h,H,i);
    }
    for(int i=1;i<=H;i++){
        cout<<" "<<h[i];
    }
    cout<<endl;
}
