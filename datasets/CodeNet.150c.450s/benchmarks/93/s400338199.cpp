#include<iostream>
#include<algorithm>

using namespace std;

#define INFTY 1000000001

typedef struct card{
  char mark;
  int num;
} card;

//安定で高速
void merge(card *A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int i, j;

  card L[n1 + 10], R[n2 + 10];
  for(i = 0;i < n1;i++) L[i] = A[left + i];
  for(i = 0;i < n2;i++) R[i] = A[mid + i];

  L[n1].num = INFTY;
  R[n2].num = INFTY;

  i = 0;
  j = 0;

  for(int k = left;k < right;k++){
    if(L[i].num <= R[j].num){
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(card *A, int left, int right){
  if(left + 1 < right){
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int partition(card *A, int p, int r){
  int x = A[r].num;
  int i = p - 1;
    for(int j = p;j < r;j++){
      if(A[j].num <= x){
        i++;
        swap(A[i], A[j]);
      }
    }
    swap(A[i + 1], A[r]);
  return i + 1;
}

void quicksort(card *A, int p, int r){
  if(p < r){
    int q = partition(A, p, r);
    quicksort(A, p, q - 1);
    quicksort(A, q + 1, r);
  }
}

int main(){

  int n;
  card a[100010], b[100010];

  cin >> n;
  for(int i = 0;i < n;i++){
    char mark;
    int num;

    cin >> mark >> num;
    a[i].mark = mark;
    a[i].num = num;
    b[i].mark = mark;
    b[i].num = num;
  }

  quicksort(a, 0, n - 1);
  mergeSort(b, 0, n);

  bool flag = true;
  for(int i = 0;i < n;i++){
    if(a[i].mark != b[i].mark){
      flag = false;
      break;
    }
  }

  if(flag) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i = 0;i < n;i++) cout << a[i].mark << ' ' << a[i].num << endl;

  return 0;
}

