#include<iostream>
#include<math.h>
#include<iomanip>
#include<string.h>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<algorithm>

using namespace std;

class card{
public:
  int num;
  char pic;
};

int partition(card a[], int j, int r){
  int x = a[r].num;
  int i = j - 1;

  while(j < r){
    if(a[j].num <= x){
      i++;
      swap(a[i], a[j]);
    }
    j++;
  }
  swap(a[++i], a[r]);
  return i;
}

void quicksort(card a[], int left, int right){
  if(left  < right){
    int r = partition(a, left, right);
    quicksort(a, left, r - 1);
    quicksort(a, r + 1, right);
  }

}

void merge(card a[], int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  card l[n1], r[n2];
  for(int i = 0; i < n1; i++){
    l[i] = a[left + i];
  }
  l[n1].num = 1000000000;
  for(int i = 0; i < n2; i++){
    r[i] = a[mid + i];
  }
  r[n2].num = 1000000000;
  int j = 0, k = 0;
  for(int i = 0; i < n1 + n2; i++){
    if(l[j].num <= r[k].num){
      a[left + i] = l[j];
      j++;
    }
    else{
      a[left + i] = r[k];
      k++;
    }
  }
}

void mergesort(card a[], int left, int right){
  if(left + 1 < right){
    int mid = (left + right) / 2;
    mergesort(a, left, mid);
    mergesort(a, mid, right);
    merge(a, left, mid, right);
  }
}

int main(){
  int n;
  cin >> n;
  card a[n], b[n];
  for(int i = 0; i < n; i++){
    cin >> a[i].pic >> a[i].num;
    b[i] = a[i];
  }

  mergesort(b, 0, n);

  for(int i = 0; i < n; i++){
  //  cout << b[i].pic << " " << b[i].num << endl;
  }

  quicksort(a, 0, n - 1);

  int sum = 0;
  for(int i = 0; i < n; i++){
    if(a[i].pic == b[i].pic) sum++;
    else break;
  }
  if(sum == n) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

  for(int i = 0; i < n; i++){
    cout << a[i].pic << " " << a[i].num << endl;
  }


}
