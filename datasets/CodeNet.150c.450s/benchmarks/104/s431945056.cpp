#include<iostream>
#include<vector>

using namespace std;

void swap(int&, int&);

int main(){
  int w, n, a, b;
  char c;
  vector<int> x;

  cin >> w;
  cin >> n;

  for(int i=0; i<=w; ++i)
    x.push_back(i);

  for(int i=0; i<n; ++i){
    cin >> a >> c >> b;
    swap(x[a], x[b]);
  }

  for(int i=1; i<=w; ++i)
    cout << x[i] << endl;

  return 0;
}

void swap(int& a, int& b){
  int c;
  c = a;
  a = b;
  b = c;
}