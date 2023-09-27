#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 200000;
int BIT[MAX_N + 1];
int A[MAX_N], unzip[MAX_N];
int N;
map<int, int> zip;

int sum(int i)
{
  i++;
  int s = 0;
  while (i > 0){
    s += BIT[i];
    i -= i & -i;
  }
  return s;
}

void add(int i, int x)
{
  i++;
  while (i <= N){
    BIT[i] += x;
    i += i & -i;
  }
}

int main()
{
  cin >> N;
  for (int i = 0; i < N; ++i){
    cin >> A[i];
    unzip[i] = A[i];
  }
  
  sort(unzip, unzip + N);
  for (int i = 0; i < N; i++){
    zip[unzip[i]] = i;
  }

  long long ans = 0;
  for (int j = 0; j < N; j++){
    ans += j - sum(zip[A[j]]);
    add(zip[A[j]], 1);
  }
  cout << ans << endl;

  return 0;
}