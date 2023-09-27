#include<iostream>
using namespace std;

int s[10001];

int lsearch(int n,int key){

  s[n] = key;
  for(int i=0; i<n+1; i++){
    if(s[i]==key)return i;
  }
  return 0;
}

int main(){

  int n,q;
  int sum=0;
  int t;

  cin>>n;
  for(int i=0; i<n; i++)cin>>s[i];

  cin >> q;
  for(int i=0; i<q; i++){
    cin >> t;
    if(lsearch(n,t)!=n)sum++;
  }

  cout << sum << endl;

  return 0;
}