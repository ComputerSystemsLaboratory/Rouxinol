#include<iostream>
using namespace std;
const int INF = 1e9;

int n, k, w[100000];
int w_mx = 0;

bool b_search(int p)
{
  int pointer = 0;
  for(int i = 0; i < k && pointer < n; i++){
    int truck = 0;
    while(pointer < n && truck + w[pointer] <= p)
      truck += w[pointer++];
  }
  
  if(pointer < n)
    return false;
  return true;
}

int main()
{
  cin >> n >> k;
  for(int i = 0; i < n; i++)
    cin >> w[i];

  int s = 0, e = INF;
  while(e - s > 1){
    int mid = (s + e) / 2;
    if(b_search(mid))
      e = mid;
    else
      s = mid;
  }

  cout << e << endl;
  return 0;
}