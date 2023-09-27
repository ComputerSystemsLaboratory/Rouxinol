#include <cstdio>
#include <iostream>

#define sentinel 2000000000
using namespace std;

long long int cnt;

void merge(int a[],int left,int mid,int right){
    
int L[mid-left+1],R[right-mid+1];
for(int i=0;i<mid-left;i++){
    L[i] = a[left+i];
}
for(int j=0;j<right-mid;j++){
    R[j] = a[mid+j];
}
L[mid-left] = sentinel;
R[right-mid] = sentinel;

int i = 0;
int j = 0;
int leftnum = 0;

for(int k=0;k<right-left;k++){
    if(L[i]<R[j]){
        a[left+k] = L[i];
        i++;
        leftnum++;
        }
        else {
            a[left+k] = R[j];
            j++;
            cnt += mid - left - leftnum; 
        }
    }
}


void mergesort(int a[],int left,int right){

if(left + 1 < right){
    int mid = (left + right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid,right);
    merge(a,left,mid,right);
}
}

int main(){
    cnt = 0;
    int n;
    scanf("%d",&n);
    int *a = new int[n];
    
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    mergesort(a,0,n);
    cout << cnt <<endl;
    delete[] a;
return 0;

}
