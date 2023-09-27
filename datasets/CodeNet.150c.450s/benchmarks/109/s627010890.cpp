#include<bits/stdc++.h>
using namespace std;

int foo(string t){
  int a;
  a = (t[0] - '0') * 10 * 3600 + (t[1] - '0') * 3600 + (t[3] - '0') * 10 * 60 + (t[4] - '0')* 60 + (t[6] - '0') * 10 + (t[7] - '0');
  return a;
}

int main(){
  int n, f ,k;
  int i, l;
  
  while(1){
    string t, j;
    int z[3600 * 24 + 10] = {};
    int max = 0;
    cin>>n;
    
    if(n == 0) break;
    
    for(i = 0; i < n; i++){
      cin>>t>>j;
      f = foo(t);
      k = foo(j);
      for(l = f; l < k; l++){
	z[l]++;
      }
    }
    
    for(i = 0; i < 3600 * 24; i++){
      if(max < z[i]) {max = z[i];}//cout<<z[i]<<" "<<i<<endl;
    }

    cout<<max<<endl;
    
  }
  
  return 0;
}

