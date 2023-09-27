#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<string>st(n);
  vector<string>st2;
  for(int i=0;i<n;i++){
    cin >> st[i];
  }
  st2=st;
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(st[j][1]<st[j-1][1])
	swap(st[j],st[j-1]);
    }
  }
  for(int i=0;i<n;i++){
    cout << st[i];
    if(i+1!=n)
      cout << " ";
  }
  cout << endl;
  cout << "Stable"<< endl;
  //
  int f=0;
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(st2[j][1]<st2[minj][1])
	minj=j;
    }
    if(i!=minj){
      swap(st2[i],st2[minj]);
    }
  }
  for(int i=0;i<n;i++){
    cout << st2[i];
    if(st2[i]!=st[i])f=1;
    if(i+1!=n)cout << " ";
  }
  cout << endl;
  if(f)cout << "Not stable" << endl;
  else cout << "Stable" << endl;
  return 0;
}