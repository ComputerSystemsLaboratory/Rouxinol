#include <iostream>
#include <limits.h>
#include <string>
using namespace std;
long int A[2000000];

int n;

int parent(int i){
    return i/2;
}
int left(int i){
    return 2*i;
}
int right(int i){
    return 2*i+1;
}

void heapIncreaseKey(int i,int key){
    if(key < A[i])
	    return;
    A[i] = key;
    while(i>1 && A[parent(i)] < A[i]){
        swap(A[i], A[parent(i)]);
        i = parent(i);
    }
}

void maxHeapInsert(int key){
    n++;
    A[n]=INT_MIN;
    heapIncreaseKey(n, key);
}

void maxHeapify(int);
int heapExtractMax(){
    int maxi;
    if(n<1)
        return -1;
    maxi = A[1];
    A[1] = A[n];
    n--;
    maxHeapify(1);
    return maxi;
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
    int id;
    string cmd;
    A[0]=0;
    do{
	    cin>>cmd;
	    if(cmd=="insert"){
	        cin>>id;   
	        maxHeapInsert(id);
	    }
	    if(cmd=="extract"){
	        cout<<heapExtractMax()<<endl;;
    	} 
    }while(cmd!="end");

    return 0;
}