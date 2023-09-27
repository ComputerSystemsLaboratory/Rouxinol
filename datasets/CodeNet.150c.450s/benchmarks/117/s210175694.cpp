#include <iostream>

using namespace std;

int cnt = 0;
void merge(int a[], int left,int right){
  int i = left;
   int mid = left + (right - left) / 2;
    int j = mid + 1;
     int k = 0;
      int temporary[500100];

     while(i <= mid && j <= right){
       if(a[i] <= a[j]){
        cnt++;
           temporary[k] = a[i]; i++;
       }
       else {
        cnt++;
          temporary[k] = a[j]; j++;
       }
       k++;
     }
     while(i <= mid){
      cnt++;
       temporary[k] = a[i];
       i++; k++;
     }
     while(j <= right){
      cnt++;
      temporary[k] = a[j];
      j++; k++;
     }

     for(int i = 0; i < k; i++){
       a[left + i] = temporary[i];
     }
}
void mergeSort(int a[], int left, int right){
  if(left < right){
    int mid = (left + right) / 2;

    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, right);
  }
}


int main(){
   int n;
   
   cin >> n;

   int a[n];

   for(int i = 0; i < n; i++){
    cin >> a[i];
   }

   mergeSort(a, 0, n - 1);

   for(int i = 0; i < n; i++){
    if(i != n - 1)
    cout << a[i] << " ";
    else
       cout << a[i] << endl;
   }


   cout << cnt << endl;
  return 0;
}
