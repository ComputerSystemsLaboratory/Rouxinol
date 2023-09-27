#include<bits/stdc++.h>
using namespace std;

int s[10000];
int t[500];

bool linersearch(int t, int n)
{
  int i;
  
  i = 0;
  while(s[i] != t){
    i++;
    if(s[i] == t) return true;
    if(i == n-1) return false;
  }
  return true;
}

int main(){
  int n,q;
  int cnt=0;
  
  cin >> n;
  for(int i=0;i < n;i++){
    cin >> s[i];
  }
  cin >> q;
  for(int i=0;i < q;i++){
    cin >> t[i];
    if(linersearch(t[i],n))cnt++;
  }
  
  cout << cnt << endl;
  return 0;
}
