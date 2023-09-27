#include<iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int count=0;
void merge(int a[],int left,int mid,int right){
    int n1=mid-left,n2=right-mid;
    int l[n1+1],r[n2+1];
    for(int i=0;i<n1;i++){
	    l[i]=a[left+i];
	}
    for(int i=0;i<n2;i++) {
	   r[i]=a[mid+i];
	}
    l[n1]=1000000000; 
    r[n2]=1000000000;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        count++;
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=r[j];
            j++;
        }
    }
}
void mergesort(int a[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid,right);
        merge(a,left,mid,right);
    }
}
 
int main(){
    int n;  
    cin>>n;
    int data[n];
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    mergesort(data,0,n);
    printf("%d",data[0]);
    for(int i=1;i<n;i++){
		 printf(" %d",data[i]);
	}  
    printf("\n%d\n",count);
    return 0;
}
