#include<stdio.h>
 
int count;
 
void merge(int A[], int left, int mid, int right, int n){
 
int n1, n2, L[250001], R[250001], i, j, k;
n1 = mid - left;
n2 = right - mid;
for(i = 0; i < n1; i++){
L[i] = A[left + i];
}
for(i = 0; i < n2; i++){
R[i] = A[mid + i];
}
L[n1] = 2000000000;
R[n2] = 2000000000;
i = 0;
j = 0;
for(k = left; k < right; k++){
count++;
if(L[i] <= R[j]){
A[k] = L[i];
i++;
}
else{
A[k] = R[j];
j++;
}
 
}
 
}
 
 
 
void mergeSort(int A[], int left, int right, int n){
 
int mid;
if(left + 1 < right){
mid = (left + right) / 2;
mergeSort(A, left, mid, n);
mergeSort(A, mid, right, n);
merge(A, left, mid, right, n);
}
 
}
 
 
 
int main(void){
 
int A[500000], n, i;
count = 0;
 
scanf("%d",&n);
for(i = 0; i < n; i++){
scanf("%d",&A[i]);
}
 
mergeSort(A, 0, n, n);
 
for(i = 0; i < n; i++){
if(i != 0) printf(" ");
printf("%d", A[i]);
}
 
printf("\n");
printf("%d\n",count);
 
return 0;
}