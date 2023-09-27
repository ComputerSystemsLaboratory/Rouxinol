#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,min,max,i,s;
  long long sum = 0;
  cin >> n;
  cin >> s;
  min = s;
  max = s;
  sum = s;
  for(i=0;i<n-1;i++){
    cin >> s;
    if(s>max) max=s;
    if(min>s) min=s;
    sum = sum+s;
  }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}

