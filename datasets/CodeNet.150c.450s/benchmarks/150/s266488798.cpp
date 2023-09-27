#include<iostream>
#include<vector>
using namespace std;

vector<int> a;
vector<int> b;
vector<int> c;

void CountingSort(int n, int k){
  b.resize(n+5);
  c.resize(k+5);
  for(int i = 0; i <= k; i++) c[i] = 0;
  
  for(int i = 1; i <= n; i++) c[a[i]]++;

  for(int i = 1; i <= k; i++) c[i] = c[i] + c[i-1];

  for(int i = n; i >= 1; i--){
    b[c[a[i]]] = a[i];
    c[a[i]]--;
  } 
}

int main()
{
  int n;
  cin >> n;

  a.resize(n+5);
  int k = 0;

  for(int i = 0; i < n; i++){
    cin >> a[i+1];
    if(a[i+1] > k) k = a[i+1];
  }

  CountingSort(n, k);

  for(int i = 1; i <= n; i++){
    if(i != 1) cout << " ";
    cout << b[i];
  }

  cout << endl;

  return 0;

}

