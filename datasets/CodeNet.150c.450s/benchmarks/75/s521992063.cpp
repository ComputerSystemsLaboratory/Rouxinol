#include <iostream>
using namespace std;

int H;

int A[2000000];

void maxHeapify(int i){
    int left,right,largest;
    left=2*i;
    right=2*i+1;
    
    largest=i;
    if(left<=H && A[left]>A[i]){
        largest=left;
    }
        if(right<=H && A[right]>A[largest]){
            largest=right;
        }
            if(largest!=i){
                int  tmp=A[i];
                A[i]=A[largest];
                A[largest]=tmp;
                maxHeapify(largest);
            }
}


int main(){
    cin>>H;
    int i;
    for(i=1;i<=H;i++){
        cin>>A[i];
    }
    for(i=H/2;i>=1;i--){
        maxHeapify(i);
    }
    for(i=1;i<=H;i++){
            cout<<" "<<A[i];;
    }
    cout<<endl;
    return 0;
}
