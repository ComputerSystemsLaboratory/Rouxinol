//??????????????????
#include<iostream>
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep3(i,k,n) for(int i = k; i < n; i++)
#define INFTY 2000000000
using namespace std;

int L[250002],R[250002],cnt;

//???????????????????£????????????§????????????
void merge(int A[],int n,int left,int mid,int right){
    int n1 = mid-left;
    int n2 = right - mid;
    rep(i,n1){
        L[i]=A[left+i];
    }
    rep(i,n2){
        R[i]=A[mid+i];
    }
    L[n1]=INFTY;
    R[n2]=INFTY;
    int i=0,j=0,k;
    rep3(k,left,right){
        cnt++;
        if(L[i]<=R[j]){
            A[k]=L[i++];
        }else{
            A[k]=R[j++];
        }
    }
}

void MergeSort(int A[],int n, int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        MergeSort(A,n,left,mid);
        MergeSort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}

int main(void){
    int A[500000],n,i;
    cnt=0;

    cin >> n;
    rep(i,n) cin >> A[i];
    MergeSort(A,n,0,n);
    
    rep(i,n){
        if(i) cout << " ";
        cout << A[i];
    }
    cout << endl;

    cout << cnt << endl;

    return 0;
}