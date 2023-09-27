#include <bits/stdc++.h>

#define INF 1000000001
using namespace std;

long counter = 0;

void merge(vector<int> &A,const int left,const int mid,const int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1+1,0),R(n2+1,0);
    for(int i = 0;i < n1;i++) L[i] = A[left + i];
    for(int i = 0;i < n2;i++) R[i] = A[mid  + i];
    L[n1] = INF;R[n2] = INF;
    int j = 0,k = 0;
    for(int i = left;i < right;i++){
        if(L[j] <= R[k]){
            A[i] = L[j];
            j++; 
        }else if(L[j] > R[k]){
            counter += (long)L.size() - j-1;
            A[i] = R[k];
            k++;
        }
    }
}

void mergeSort(vector<int> &A,int left,int right){
    if(left + 1 < right){
        int mid = (left + right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);

    }
}


int main(){
    int flag = 0;
    int len_array;
    int temp;
    scanf("%d",&len_array);
    
    vector<int> int_array(len_array,0);
    for(int i = 0;i < len_array;i++){
        scanf("%d",&temp);
        int_array[i] = temp;
    } 
    
    mergeSort(int_array,0,len_array);
    
    // for(int i = 0;i < len_array;i++){
    //     printf("%d",int_array[i]);
    //     if(i < len_array-1) printf(" ");
    //     else printf("\n");
    // }
    printf("%ld\n",counter);
    return 0;   
}

