#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans;
  while(cin >> n && n != EOF){
    ans = 0;
    for(int i1 = 0;i1 <= 9;i1++){
       for(int i2 = 0;i2 <= 9;i2++){
	  for(int i3 = 0;i3 <= 9;i3++){
	     for(int i4 = 0;i4 <= 9;i4++){
	       if(n == i1 + i2 + i3 + i4)ans++;
	     }
	  }
       }
    }
    cout << ans <<endl;
  }
  return 0;
}