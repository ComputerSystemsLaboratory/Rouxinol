#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;

template <class X> void print(X Target){ cout << Target << '\n'; }

bool isprime(int num)
{
  if (num == 2){
    return (true);
  }
  else if (num == 1 || num % 2 == 0){
    return (false);
  }
  for (int i = 3; i <= num / i; i += 2){
    if (num % i == 0){
      return (false);
    }
  }
  return (true);
}

signed main()
{
  ios::sync_with_stdio(false);

  int x;
  vi prime;

  cin >> x;
  for (int i = 2; i <= sqrt(x); i++){
    if (isprime(i)){
      prime.pb(i);
    }
  }
  cout << x << ":";
  for (int i = 0; i < prime.size();){
    if (x % prime[i] == 0){
      x /= prime[i];
      cout << " " << prime[i];
    }
    else i++;
  }
  if (x != 1){
    cout << " " << x;
  }
  print("");

  return (0);
}