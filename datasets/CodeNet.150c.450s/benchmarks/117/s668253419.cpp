#include<stdio.h>
#include<limits.h>

/* Merge Sort */
int s[500000];
int cnt = 0;

void merge(int *a, int l, int m, int r){
        int i, j, k;
        int n1 = m-l;
        int n2 = r-m;
        int x[n1+1], y[n2+1];
        for(i=0; i<n1; i++){
                x[i] = a[l+i];
        }
        for(i=0; i<n2; i++){
                y[i] = a[m+i];
        }
        x[n1] = INT_MAX;
        y[n2] = INT_MAX;
        i=0;
        j=0;
        for(k=l; k<r; k++){
                cnt++;
                if(x[i] <= y[j]){
                        a[k] = x[i];
                        i++;
                }else{
                        a[k] = y[j];
                        j++;
                }
        }
}

void mergeSort(int *a, int l, int r){
        int m;
        if((l+1) < r){
                m = (l+r) / 2;
                mergeSort(a, l, m);
                mergeSort(a, m, r);
                merge(a, l, m, r);
        }
}

int main(void){
        int i, N;

        scanf("%d", &N);
        for(i=0; i<N; i++){
                scanf("%d", &s[i]);
        }
        mergeSort(s, 0, N);
        for(i=0; i<N-1; i++){
                printf("%d ", s[i]);
        }
        printf("%d\n", s[i]);
        printf("%d\n", cnt);

        return 0;
}