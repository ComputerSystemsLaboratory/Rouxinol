#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//Code here bby
  int n;
  cin>>n;
  map<ll, int> freq;
  int idx = 0;
  ll sum = 0;
  while(idx < n){
    ll elem;
    cin>>elem;
    if(freq.count(elem)){
      freq[elem]++;
    } else {
      freq[elem] = 1;
    }
    sum += elem;
    idx++;
  }
  int q;
  cin>>q;
  while(q--){
    ll a, b;
    cin>>a>>b;
    ll dif = b - a;
    sum += dif * (freq[a]);
    freq[b] += freq[a];
    freq[a] = 0;
    cout<<sum<<endl;
  }
}
