#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

#define max_n 37
vector<string> stable_check_vs;

vector<string> selectionSort(vector<string> a, int n){
  for(int i = 0; i < n; i++){
    int min_j = i;
    for(int j = i; j < n; j++){
      if((int)a[j][1] < (int)a[min_j][1]) min_j = j;
    }
    if(i != min_j){
      a[i].swap(a[min_j]);
    }
  }
  for(int i = 0; i < n-1; i++){
    cout << a[i] << " ";
  }
  cout << a[n-1] << endl;
  return a;
}

vector<string> bubblesort(vector<string> a, int n){
  for(int i = 0; i < n; i++){
    for(int j = n-1; j>i; j--){
      if((int)a[j][1] < (int)a[j-1][1]){
        a[j].swap(a[j-1]);
      }
    }
  }

  for(int i = 0; i < n-1; i++){
    cout << a[i] << " ";
  }
  cout << a[n-1] << endl;

  return a;
}

void solve(vector<string> s, int n){
  vector<string> t, k;
  t = s;
  s = bubblesort(s, n);
  cout << "Stable" << endl;
  t = selectionSort(t, n);
  if(s == t) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  return ;
}
int main(){
  int n;
  cin >> n; cin.ignore();
  vector<string> a;
  string tmp;
  while(cin >> tmp){
    a.push_back(tmp);
  }
  solve(a, n);
  return 0;
}