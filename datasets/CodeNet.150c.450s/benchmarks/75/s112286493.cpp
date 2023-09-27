#include<iostream>
#include<vector>
#include<algorithm>
#define INF 10000000000
using namespace std;

vector<long long int> a;
int n;

void maxHeapify(int i){
  int largest;
  int l = i*2;
  int r = i*2+1;

  if(l <= n && a[l] > a[i]) largest = l;
  else largest = i;

  if(r <= n && a[r] > a[largest]) largest = r;

  if(largest != i){
    swap(a[i], a[largest]);
    maxHeapify(largest);
  }
}

void buildMaxHeap(){
  for(int i = a.size()/2; i >= 1; i--){
    maxHeapify(i);
  }
}

int main()
{

  cin >> n;

  a.resize(n+5);

  for(int i = 0; i < n+5; i++) a[i] = INF;
  for(int i = 1; i <= n; i++) cin >> a[i];

  buildMaxHeap();

  for(int i = 1; i <= n; i++) cout << " " << a[i];

  cout << endl;

  return 0;

}

