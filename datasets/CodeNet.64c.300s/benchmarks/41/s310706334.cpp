#include<iostream>
using namespace std;

void maxHeapify(int H[],int n,int i){//H[i]を根とするmax-heapにする
    int left=0,right=0;//初期化
    if(2*i<n+1)   left = H[2*i];
    if(2*i+1<n+1) right = H[2*i+1];
    //現在のkeyとleft,rightを比べる
    if(left > H[i] && left > right){//左の子がさいつよのとき.
        H[2*i] = H[i];
        H[i] = left;
        maxHeapify(H,n,2*i);
    }else if(right > H[i] && left < right){//右の子がさいつよのとき.
        H[2*i+1] = H[i];
        H[i] = right;
        maxHeapify(H,n,2*i+1);
    }
    //2*iとかがout of rangeしたとしても、その時は条件に引っかかることはないので大丈夫.
}
void buildMaxheap(int H[],int n){
    for(int i = n/2;i>0;i--){
        maxHeapify(H,n,i);
    }
}
void print(int H[],int n){
    for(int j=0;j<n;j++){
        cout<<" "<<H[j+1];
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    int H[n+1];for(int i=0;i<n;i++)cin>>H[i+1];//インデックス0は欠番.
    buildMaxheap(H,n);
    print(H,n);
    return 0;
}
