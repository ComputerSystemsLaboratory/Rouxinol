#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int INFTY=2000000000,t;
vector<int> s;

void merge(int left,int mid,int right){
    int n1=mid-left,n2=right-mid;
    vector<int> l(n1+1),r(n2+1);
    for(int i=0;i<n1;i++){
        l[i]=s[left+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=s[mid+i];
    }
    l[n1]=INFTY;
    r[n2]=INFTY;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(l[i]<=r[j]){
            s[k]=l[i];
            i++;
            t++;
        }
        else{
            s[k]=r[j];
            j++;
            t++;
        }
    }
}

void mergeSort(int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergeSort(left,mid);
        mergeSort(mid,right);
        merge(left,mid,right);
    }
}

int main(void){
    int n;
    t=0;
    cin>>n;
    s.resize(n,0);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    mergeSort(0,n);
    for(int i=0;i<n-1;i++){
        cout<<s[i]<<" ";
    }
    cout<<s[n-1]<<endl<<t<<endl;
    return 0;
}