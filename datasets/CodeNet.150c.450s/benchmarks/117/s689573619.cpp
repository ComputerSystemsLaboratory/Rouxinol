#include<iostream>
#define MAX_NUM 500000
#define INFTY 1000000001
int count = 0;

void merge(int a[],int left,int mid,int right){
    int n1 = mid-left;
    int n2 = right-mid;
    int l[n1+1];
    int r[n2+1];
    for(int i=0;i<n1;i++){
        l[i] = a[left+i];
    }
    for(int i=0;i<n2;i++){
        r[i] = a[mid+i];
    }
    l[n1] = INFTY;
    r[n2] = INFTY;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        count++;
        if(l[i] < r[j]){
            a[k] = l[i];
            i++;
        }else{
            a[k] = r[j];
            j++;
        }
    }
}

void mergeSort(int a[],int left,int right){
    if(left+1<right){
        int mid = (left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid,right);
        merge(a,left,mid,right);
    }
}

int main(){
    int a[MAX_NUM] = {};
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> a[i];
    }
    
    mergeSort(a,0,n);
    
    std::cout << a[0] ;
    for(int i=1;i<n;i++){
        std::cout << ' ' << a[i];
    }
    std::cout << '\n' << count << '\n';
    return 0;
}

