#include<iostream>
#include<cmath>
using namespace std;
typedef long long llong;

//辞書みたいなのがほしいが...strucで保存しておく。
struct NUM{int num;llong inv;};

void merge(int left,int mid,int right,NUM A[]){
    //2つの配列をmerge,つまりソートする
    int n1=mid-left;//本来の要素数より1つ多いのは、最後に
    int n2=right-mid;//番兵をいれたいから。
    NUM L[n1+1],R[n2+1];
    for(int i=0;i<n1;i++){
        L[i]=A[left+i];
    }L[n1].num=pow(10,9)+1;
    for(int j=0;j<n2;j++){
        R[j]=A[mid+j];
    }R[n2].num=pow(10,9)+1;
    int i=0,j=0;//インデックスを比較していく
    while(i<n1 || j<n2){
        //どっちも番兵に来たらオワリ
        if(L[i].num<=R[j].num){
            A[left+i+j]=L[i];
            i++;
        }
        else{
            A[left+i+j]=R[j];
            A[left+i+j].inv+=n1-i;
            j++;
        }
    }
}

void mergeSort(int left,int right,NUM A[]){
    if(right>left+1){
        int mid = (right+left)/2;
        mergeSort(left,mid,A);
        mergeSort(mid,right,A);
        merge(left,mid,right,A);
    }
}

int main(){
    int n;llong cnt=0;
    cin>>n;NUM A[n];for(int i=0;i<n;i++){cin>>A[i].num;A[i].inv=0;}
    mergeSort(0,n,A);
    for(int i=0;i<n;i++){
        cnt+=A[i].inv;
    }
    cout<<cnt<<endl;
    return 0;
}
