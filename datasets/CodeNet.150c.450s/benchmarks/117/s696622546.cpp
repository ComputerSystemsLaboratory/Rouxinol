#include <cstdio>
#include <vector>
#include <climits>

using namespace std;

int n;
vector<int> S;

int merge(int left, int mid, int right)
{
    int n1=mid-left, n2=right-mid;
    vector<int> L(n1+1), R(n2+1);
    for(int i=0; i<n1; i++){
        L[i]=S[left+i];
    }
    L[n1]=INT_MAX;
    for(int i=0; i<n2; i++){
        R[i]=S[mid+i];
    }
    R[n2]=INT_MAX;

    int cnt=0;
    for(int i=0, j=0, k=left; k<right; k++){
        if(L[i]<=R[j]){
            S[k]=L[i];
            i++;
        } else{
            S[k]=R[j];
            j++;
        }
        cnt++;
    }
    return cnt;
}

int mergeSort(int left, int right)
{
    if(left+1<right){
        int mid=(left+right)/2;
        int c1=mergeSort(left, mid);
        int c2=mergeSort(mid, right);
        return merge(left, mid, right)+c1+c2;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    S=vector<int>(n);
    for(auto &it : S){
        scanf("%d", &it);
    }
    int cnt=mergeSort(0, n);
    for(auto it=S.begin(); it!=S.end(); it++){
        if(it!=S.begin()){
            printf(" ");
        }
        printf("%d", *it);
    }
    printf("\n");
    printf("%d\n", cnt);
    return 0;
}