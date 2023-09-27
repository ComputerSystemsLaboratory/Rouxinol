#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=int(a);i<int(b);i++)
#define INF 1200000000

struct card{
    char sui;
    int num;
};   

card x;

int parti(card A[],int p,int r){
    x=A[r];
    int i=p-1;
    card a;
    rep(j,p,r){
        if(A[j].num<=x.num){
            i++;
            a=A[i];
            A[i]=A[j];
            A[j]=a;
        }
    }
    a=A[i+1];
    A[i+1]=A[r];
    A[r]=a;
    return i+1;
}

void quicksort(card A[],int p,int r){
    int q;
    if (p<r){
        q=parti(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}


card L[50015],R[50010];

void merge(card A[],int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++)L[i]=A[left+i];
    for(int i=0;i<n2;i++)R[i]=A[mid+i];
    L[n1].num=INF;R[n2].num=INF;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i].num<=R[j].num){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }
}
    

void mergesort(card A[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid,right);
        merge(A,left,mid,right);
    }
}



int main(){
    int n;
    card C[100010],D[100010];
    cin>>n;
    rep(i,0,n){
        cin>>C[i].sui>>C[i].num;
        D[i]=C[i];
    }
    quicksort(C,0,n-1);
    mergesort(D,0,n);
    
    bool jud=1;
    rep(i,0,n){
        if(C[i].sui!=D[i].sui || C[i].num!=D[i].num){
            jud=0;
            break;
        }
    }
    if(jud)cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    
    rep(i,0,n){
        cout<<C[i].sui<<" "<<C[i].num<<endl;
    }
    
}



