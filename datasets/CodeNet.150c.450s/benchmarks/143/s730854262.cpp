#include <bits/stdc++.h>

#define ll long long int
#define MAX 100001

using namespace std;

void calculate(vector<ll>& count, ll& sum)
{
  ll Q, B, C;
  cin >> Q;
  for (ll i = 0; i < Q; i++){
    cin >> B >> C;
    sum += (count[B] * (C - B));
    count[C] += count[B];
    count[B] = 0;
    cout << sum << '\n';
  }
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N, sum = 0, element;
  cin >> N;
  vector<ll> count(MAX, 0);
  for (ll i = 0; i < N; i++){
    cin >> element;
    sum += element;
    count[element]++;
  }
  calculate(count, sum);
  return 0;
}
