#include<iostream>
#include<algorithm>
#include<vector>
#define all(c) (c).begin(),(c).end()

using namespace std;

int mergecount(vector<int> &a) {
  int count=0,n=a.size();
  if (n>1){
    vector<int>b(a.begin(),a.begin()+n/2);
    vector<int>c(a.begin()+n/2,a.end());
    count+=mergecount(b);
    count+=mergecount(c);
    for (int i=0,j=0,k=0;i<n;i++)
      if (k == c.size())a[i]=b[j++];
      else if (j == b.size())a[i]=c[k++];
      else if (b[j]<=c[k])a[i]=b[j++];
      else a[i]=c[k++],count+=n/2-j;
  }
  return count;
}

int main(void){
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin >> v[i];
  int cnt=mergecount(v);
  sort(all(v));
  for(int i=0;i<n;i++)cout << v[i] << (i<n-1?" ":"\n");
  cout << cnt << endl;
  return 0;
}