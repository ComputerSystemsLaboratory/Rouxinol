#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define SENTINEL 2000000000
pair<char,int> A[MAX],B[MAX],Q[MAX/2+2],L[MAX/2+2];

int partition_sort(int p,int r){
    int x=A[r].second;
    int i=p-1,j=p;
    for(j=p;j<=r;j++){
        if(A[j].second<=x){i++;swap(A[i],A[j]);}
    }
    return i;
}

void quick_sort(int p,int r){
    if(p<r){
    int q=partition_sort(p,r);
    quick_sort(p,q-1);
    quick_sort(q+1,r);
    }
}

void merge_sort_from(int left,int midth,int right){
    int i,j,k;
    for(i=0;i<midth-left;i++){
        Q[i]=B[left+i];
    }
    Q[midth-left].second=L[right-midth].second=SENTINEL;
    for(i=0;i<right-midth;i++){
        L[i]=B[midth+i];
    }
    i=0,j=0,k=left;
    while(i<midth-left||j<right-midth){
        if(Q[i].second>L[j].second){
            B[k]=L[j];
            j++;
        }
        else{B[k]=Q[i];i++;}
        k++;
    }
}

void merge_sort(int left,int right){
    if(left+1<right){
    int midth=(left+right)/2;
    merge_sort(left,midth);
    merge_sort(midth,right);
    merge_sort_from(left,midth,right);
    }
    return;
}

int main(){
    int n,i;
    cin>>n;
    char S[10];
    for(i=0;i<n;i++){
        scanf("%s %d",S,&A[i].second);
        A[i].first=S[0];
        B[i]=A[i];
    }
    quick_sort(0,n-1);
    merge_sort(0,n);
    int stable=1;
    for(i=0;i<n;i++){if(A[i].first!=B[i].first){stable=0;break;}}
    if(stable==1)printf("Stable\n");
    else printf("Not stable\n");
    for(i=0;i<n;i++){
        printf("%c %d\n",A[i].first,A[i].second);
    }
}
