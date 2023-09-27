#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int H=0,A[200000001];
string com;
void maxHeapify(int i){
    int l=2*i,r=2*i+1,largest;
    if(l<=H&&A[l]>A[i]) largest=l;
    else largest=i;
    if(r<=H&&A[r]>A[largest]) largest=r;
    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeapify(largest);
    }
}
void insert(int key){
    H++;
    int h=H;
    A[H]=key;
    while(h>1&&A[h]>A[h/2]){
        swap(A[h],A[h/2]);
        h=h/2;
    }
}
void extract(){
    if(H<1)return;
    else{
        cout<<A[1]<<endl;
        swap(A[1],A[H]);
        H--;
        maxHeapify(1);
    }
}
int main(){
    while(1){
        cin>>com;
        int k;
        if(com=="end") break;
        if(com=="insert"){cin>>k; insert(k);}
        else extract();
    }
    return 0;
}
