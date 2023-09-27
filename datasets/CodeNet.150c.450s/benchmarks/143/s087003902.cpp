#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
typedef long long ll;

int main(){
  ll N;
  cin >> N;
  ll a[N];
  ll tab[100000];
  for(int i=1;i<100001;i++){
    tab[i]=0;
  }
  ll sum=0;
  for(ll i=0;i<N;i++){
    cin >> a[i];
    sum += a[i];
    tab[a[i]]++;
  }
  ll Q;
  cin >> Q;
  ll b[Q],c[Q];
  for(ll i=0;i<Q;i++){
    cin >> b[i] >> c[i];
  }
  ll change = 0;
  for(ll i=0;i<Q;i++){
    if(tab[b[i]]>0){
      tab[c[i]] += tab[b[i]];
      change = tab[b[i]]*(c[i]-b[i]);
      tab[b[i]] = 0;
    }
    sum = sum + change;
    cout << sum  << endl;
    change = 0;
  }
}
