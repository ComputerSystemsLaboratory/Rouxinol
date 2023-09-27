#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>

void merge(int *A, char *S, int left, int mid, int right){
    int i, j;
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1+1];
    int R[n2+1];
    char Ls[n1+1];
    char Rs[n2+1];
    for(i=0;i<n1;i++)L[i]=A[left+i];
    for(i=0;i<n2;i++)R[i]=A[mid+i];
    for(i=0;i<n1;i++)Ls[i]=S[left+i];
    for(i=0;i<n2;i++)Rs[i]=S[mid+i];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    Ls[n1] = CHAR_MAX;
    Rs[n2] = CHAR_MAX;
    i = 0;
    j = 0;
    for(int k=left;k<right;k++){
        if(L[i]<=R[j]){
            A[k] = L[i];
            S[k] = Ls[i];
            i++;
        }else{
            A[k] = R[j];
            S[k] = Rs[j];
            j++;
        }
    }
}

void mergeSort(int *A, char *S, int left, int right){
    if(left+1>=right)return;
    int mid = (left + right)/2;
    mergeSort(A, S, left, mid);
    mergeSort(A, S, mid, right);
    merge(A, S, left, mid, right);
}

int partition(int *a, char *s, int p, int r){
    int x = a[r];
    char y = s[r];
    int i = p - 1;
    int tmp1;
    char tmp2;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i++;
            tmp1 = a[j];
            a[j] = a[i];
            a[i] = tmp1;
            tmp2 = s[j];
            s[j] = s[i];
            s[i] = tmp2;
        }
    }
    a[r] = a[i+1];
    a[i+1] = x;
    s[r] = s[i+1];
    s[i+1] = y;
    return i + 1;
}

void quickSort(int *a, char *s, int p, int r){
    if(p>=r)return;
    int q = partition(a, s, p, r);
    quickSort(a, s, p, q-1);
    quickSort(a, s, q+1, r);
}

int main(){
    int i, n, p;
    char c;
    scanf("%d",&n);
    int a[n];
    char s[n+1];
    int a_[n];
    char s_[n+1];
    char tmp[2];
    for(i=0;i<n;i++){
        while((c = getchar())=='\n');
        s[i] = c;
        s_[i] = c;
        scanf("%s",tmp);
        a[i] = atoi(tmp);
        a_[i] = a[i];
    }
    s[n] = '\0';
    s_[n] = '\0';
    quickSort(a, s, 0, n-1);
    mergeSort(a_,s_,0,n);
    if(strcmp(s,s_)==0)printf("Stable\n");
    else printf("Not stable\n");
    for(i=0;i<n;i++){
        printf("%c %d\n",s[i],a[i]);
    }
    return 0;
}

