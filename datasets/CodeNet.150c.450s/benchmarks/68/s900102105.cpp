#include<bits/stdc++.h>

using namespace std;

int main(){
  int a[1001];

  int c[1001];

  int b, mn;

  mn = 1000000;

  while(1){

    cin >> b;

    if(b == 0) break;
    
    mn = 1000000;
    
    for(int i=0;i<b;i++){
      cin >> a[i];
    }
    for(int j=0;j<b;j++){
      for(int i=0;i<b-1;i++){
	if(a[i] < a[i+1]) swap(a[i],a[i+1]);
      }
    }
    for(int i=0;i<b-1;i++){
      c[i] = a[i] - a[i+1];
    }

    for(int i=0;i<b-1;i++){
      if(c[i]<mn) mn = c[i];
    }

    cout << mn << endl;

  }


}
