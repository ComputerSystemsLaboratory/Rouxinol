#include<iostream>
#include<vector>
#define P pair<char, int>

using namespace std;
const int SENTINENTAL = 1e9+7;

int n;
P a[100009], b[100009];

int Partition(int p, int r){
  int x=a[r].second;
  int i=p-1;
  for(int j=p;j<r;j++){
    if(a[j].second<=x){
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i+1;
}

void QuickSort(int p, int r){
  if(p<r){
    int q = Partition(p, r);
    QuickSort(p, q-1);
    QuickSort(q+1, r);
  }
}

void merge(int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  vector<P>L, R;
  for(int i=0;i<n1;i++)L.push_back(b[left+i]);
  for(int i=0;i<n2;i++)R.push_back(b[mid+i]);
  L.push_back(P(' ', SENTINENTAL));
  R.push_back(P(' ',SENTINENTAL));
  int i=0, j=0;
  for(int k=left;k<right;k++){
    if(L[i].second<=R[j].second)b[k]=L[i++];
    else b[k]=R[j++];
  }
}

void mergeSort(int left, int right){
  if(left+1<right){
    int mid=(left + right)/2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int main(){
  cin >> n;
  char suit;
  int value;
  for(int i=0;i<n;i++){
    cin >> suit >> value;
    a[i] = P(suit, value);
    b[i] = P(suit, value);
  }  
  QuickSort(0, n-1);
  mergeSort(0, n);
  bool check = true;
  for(int i=0;i<n;i++){
    if(a[i].first!=b[i].first || a[i].second != b[i].second){
      check=false;
      break;
    }
  }
  cout << (!check?"Not stable": "Stable") << endl;
  for(int i=0;i<n;i++)cout << a[i].first << ' ' << a[i].second << endl;
}
