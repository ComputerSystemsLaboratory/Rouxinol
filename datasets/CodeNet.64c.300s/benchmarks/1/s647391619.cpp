#include <bits/stdc++.h>
using namespace std;

int S[100003];
int n;
void swap(int *a, int *b){
    int tem = *b;
    *b = *a;
    *a = tem;
}

int Partition(){
    int i=-1,j=0;
    for(j;j<n-1;++j){
        if(S[j]<=S[n-1]){
            i++;
            swap(&S[i],&S[j]);
        }
    }
    swap(&S[i+1],&S[n-1]);
    return (i+1);
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i) scanf("%d",&S[i]);
    int pos = Partition();
    for(int i=0;i<n;++i){
        if(i==pos)printf("[");
        printf("%d",S[i]);
        if(i==pos)printf("]");
        if(i < n-1) printf(" ");
    }
    printf("\n");
    return 0;

}

