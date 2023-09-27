#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define ll long long
#define pb push_back
#define vi vector<int>
#define vii vector<vector<int> >

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
  
  int n, cnt = 0;
  cin >> n;
  while (n--){
    int num;
    cin >> num;
    if (isprime(num)){
      cnt++;
    }
  }
  print(cnt);

  return (0);
}