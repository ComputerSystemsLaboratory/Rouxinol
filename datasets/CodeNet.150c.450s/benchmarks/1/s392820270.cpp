#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main(){
  int n; cin >> n;
  //L[i] shows the minimum element of Incresing Subsequence whose length is i+1
  vector<int> a, L(n);
  //the length of Longest Increasing Subsequence using a_0 ... a_i
  int length=1;
  for(int i=0;i<n;i++){
    int x; cin >> x;
    a.push_back(x);
  }
  L[0]=a[0];
  for(int i=1;i<n;i++){
    if(L[length-1] < a[i]) L[length++]=a[i];
    else *lower_bound(L.begin(), L.begin()+length, a[i]) = a[i];
  }
  cout << length << endl;
}