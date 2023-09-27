#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

class card{
public:
  char mark;
  int num;
  card(){}
  card(char m, int n): mark(m), num(n){}
  bool operator<(const card& c){
    return num < c.num;
  }
  bool operator<=(const card& c){
    return (*this < c) || (num == c.num);
  }
  void print(){
    cout << mark << " " << num << endl;
  }
};

const card CARD_MAX('Z', INT_MAX);


void swap(int& x, int& y){
  if(&x == &y) return;
  x = x^y;
  y = x^y;
  x = x^y;
}

void merge(vector<card>& v, int l, int m, int r){
  int n1 = m-l;
  int n2 = r-m;
  vector<card> v1(n1+1);
  vector<card> v2(n2+1);
  for (size_t i = 0; i < n1; i++) {
    v1[i] = v[l+i];
  }
  for (size_t i = 0; i < n2; i++) {
    v2[i] = v[m+i];    
  }
  v1.back() = CARD_MAX;
  v2.back() = CARD_MAX;
  int i = 0, j = 0;
  for (size_t k = l; k < r; k++) {
    if(v1[i] <= v2[j]){
      v[k] = v1[i++];
    } else{
      v[k] = v2[j++];
    }
  }
}

void mergeSort(vector<card>& v, int l, int r){
  if(l+1 < r){
    int m = (l + r) / 2;
    mergeSort(v, l, m);
    mergeSort(v, m, r);
    merge(v, l, m, r);
  }
}



int partition(vector<card>& a, int p, int r){
  card x = a[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if(a[j] <= x){
      i++;
      swap(a[i], a[j]);
    }
  }
  i++;
  swap(a[i], a[r]);
  return i;
}


void quick(vector<card>& v, int p, int r){
  if(p < r){
    int q = partition(v, p, r);
    quick(v, p, q-1);
    quick(v, q+1, r);
  }
}

int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  vector<card> v(n);
  char c[100];
  int buf;
  for (size_t i = 0; i < n; i++ ){
    scanf("%s%d", c, &buf);
    v[i].mark = c[0];
    v[i].num = buf;
  }
  vector<card> q = v;
  vector<card> m = v;
  quick(q, 0, n-1);
  mergeSort(m, 0, n);
  bool stable = true;
  for (size_t i = 0; i < n; i++) {
    if(q[i].mark != m[i].mark){
      stable = false;
      break;
    }
  }
  if(stable){
    cout << "Stable" << endl;
  } else{
    cout << "Not stable" << endl;
  }
  
  for (size_t i = 0; i < n; i++) {
    q[i].print();
  }
  

  return 0;
}