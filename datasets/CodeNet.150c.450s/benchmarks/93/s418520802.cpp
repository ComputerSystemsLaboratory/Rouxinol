#include<iostream>
#define N_MAX 100000
#define SENTINEL 2000000000
using namespace std;

struct card{
    char suit;
    int num;
};    

card l[N_MAX/2+2],r[N_MAX/2+2];

void merge(card a[],int left,int mid,int right){
    
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++) l[i]=a[left+i];
    for(int i=0;i<n2;i++) r[i]=a[mid+i];
    l[n1].num=r[n2].num=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(l[i].num<=r[j].num) a[k]=l[i++];
        else a[k]=r[j++];
    }
}

void mergeSort(card a[],int left,int right){
    int mid;
    if(right-left>1){
        mid=(left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid,right);
        merge(a,left,mid,right);
    }
}

int partition(card a[],int p,int r){
    card x=a[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j].num<=x.num){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[++i],a[r]);
    return i;
}

void quickSort(card a[],int p,int r){
    int q;
    if(p<r){
        q=partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}

int main(){
    int n;
    card a[N_MAX],b[N_MAX];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].suit>>a[i].num;
        b[i]=a[i];
    }
    quickSort(a,0,n-1);
    mergeSort(b,0,n);
    bool stable=true;
    for(int i=0;i<n;i++){
        if(a[i].suit!=b[i].suit){
            stable=false;
            break;
        }
    }
    if(stable) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].suit<<' '<<a[i].num<<endl;
    }
}
