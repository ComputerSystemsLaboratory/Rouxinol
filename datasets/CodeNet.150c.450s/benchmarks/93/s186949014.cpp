#include <iostream>
#define M 100000
#define S 2000000000
using namespace std;

struct card{
  int num;
  char d;
};

void merge(card *a, int l,int m,int r){

  card L[M / 2 + 2];
  card R[M / 2 + 2];

  int n1 = m - l;
  int n2 = r - m;
  int b = 0,c = 0;
  for(int i = 0;i < n1;i++) L[i] = a[l + i];
  for(int i = 0;i < n2;i++) R[i] = a[m + i];
  L[n1].num = R[n2].num = S;
  for(int k = l;k < r;k++){
    if(L[b].num <= R[c].num){
      a[k] = L[b++];
    }
    else{
      a[k] = R[c++];
    }

  }
}


void mergeSort(card *a,int l,int r){
  int m;
  if(l + 1 < r){
    m = (l + r) / 2;
    mergeSort(a,l,m);
    mergeSort(a,m,r);
    merge(a,l,m,r);
  }
}

int partition (card *a,int p,int r){

  int i;
  card t,x;
  x = a[r];

  i = p - 1;

  for(int j = p;j < r;j++){

    if(a[j].num <= x.num){
      i++;
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }

  t = a[i + 1];
  a[i + 1] = a[r];
  a[r] = t;
  return i + 1;
}

void quickSort(card *a,int p,int r){
  int q;
  if(p < r){
    q = partition(a,p,r);
    quickSort(a,p,q - 1);
    quickSort(a,q + 1,r);
  }
}


int main(){

  int n;
  cin >> n;
  char in;
  bool flag = true;

  card a[100000];
  card b[100000];

  for(int i = 0;i < n;i++){
    cin >> a[i].d >> a[i].num;
    b[i].d = a[i].d;
    b[i].num = a[i].num;
  }

mergeSort(a,0,n);
quickSort(b,0,n-1);

for(int i = 0;i < n;i++){
  if(a[i].d != b[i].d) flag = false;
}

  if(flag) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i = 0;i < n;i++){
    cout << b[i].d << ' ' << b[i].num << endl;
  }
}