#include<iostream>
#include<stdio.h>
#include<algorithm>
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep3(i,k,n) for(int i = k; i < n; i++)
#define INFTY 2000000000
#define MAX 500000
using namespace std;

typedef struct Card{ char s;int x;}C;
int n;
C L[MAX/2+2],R[MAX/2+2];

void merge(C c[],int n,int left,int mid,int right){
    int n1 = mid-left;
    int n2 = right - mid;
    rep(i,n1){
        L[i]=c[left+i];
    }
    rep(i,n2){
        R[i]=c[mid+i];
    }
    L[n1].x=INFTY;
    R[n2].x=INFTY;
    int i=0,j=0,k;
    rep3(k,left,right){
        if(L[i].x<=R[j].x){
            c[k]=L[i++];
        }else{
            c[k]=R[j++];
        }
    }
}

void MergeSort(C c[],int n, int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        MergeSort(c,n,left,mid);
        MergeSort(c,n,mid,right);
        merge(c,n,left,mid,right);
    }
}

int parti(C c[],int p,int r){
    C x=c[r];
    int i=p-1;
    rep3(j,p,r){
        if(c[j].x<=x.x){
            i++;
            swap(c[i],c[j]);
        }
    }
    swap(c[i+1],c[r]);
    return i+1;
}

void QuickSort(C c[],int p,int r){
    if(p<r){
        int q=parti(c,p,r);
        QuickSort(c,p,q-1);
        QuickSort(c,q+1,r);
    }
}

void CardPrint(C c){
    cout<<c.s<<" "<<c.x<<endl;
}

int main(void){
    cin >> n;
    C M[MAX],Q[MAX];
    int v;
    char S[20];    
    rep(i,n) {
        scanf("%s %d",S,&v);
        M[i].s=S[0];M[i].x=v;
        Q[i]=M[i];
    }

    MergeSort(M,n,0,n);
    QuickSort(Q,0,n-1);

    int isStable=1;
    rep(i,n){
        if(M[i].s!=Q[i].s) isStable=0;
    }

    if(isStable) cout <<"Stable"<<endl; else cout <<"Not stable"<<endl;
    rep(i,n) CardPrint(Q[i]);
    return 0;
}