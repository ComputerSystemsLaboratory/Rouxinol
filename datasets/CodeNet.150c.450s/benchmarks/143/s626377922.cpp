#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int a;
  cin >> a;
  int b[100001];
  long long int c,d,e,f;
  long long int sum=0;
  for(int i = 0;i<100001;i++){
    b[i]=0;
  }
  for(int i = 0;i<a;i++){
    cin >> c;
    b[c]++;
    sum += c;
  }
  cin >> d;
  for(int i=0;i<d;i++){
    cin >> e >> f;
    sum +=(f-e)*b[e];
    cout << sum << endl;
    b[f] += b[e];
    b[e] = 0;
  }
}
