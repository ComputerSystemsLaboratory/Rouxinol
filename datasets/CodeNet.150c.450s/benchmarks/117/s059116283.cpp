#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

#define INF 1000000000

int cnt=0;

void merge(int s[],int left,int mid,int right){
    int n1,n2;
    int *l,*r;
    n1=mid-left;
    n2=right-mid;
    l=(int *)malloc(sizeof(int)*(n1+1));
    r=(int *)malloc(sizeof(int)*(n2+1));
    for (int i=0; i<=n1-1; i++) {
        l[i]=s[left+i];
    }
    for (int j=0; j<=n2-1; j++) {
        r[j]=s[mid+j];
    }
    l[n1]=INF;
    r[n2]=INF;
    int i=0;
    int j=0;
    for (int k=left; k<=right-1; k++) {
        if(l[i]<=r[j]){
            s[k]=l[i];
            i++;
            cnt++;
        }
        else{
            s[k]=r[j];
            j++;
            cnt++;
        }
    }
    free(l);
    free(r);
}


void mergesort(int s[],int left,int right){
    int mid;
    if (left+1<right) {
        mid=(left+right)/2;
        mergesort(s, left, mid);
        mergesort(s, mid, right);
        merge(s,left,mid,right);
    }
}

int main(){
    int n;
    int s[500000];
    cin>>n;
    for (int i=0; i<n; i++)cin>>s[i];
    mergesort(s, 0, n);
    for (int i=0; i<n-1; i++)cout<<s[i]<<" ";
    cout<<s[n-1]<<endl<<cnt<<endl;
    return 0;
}