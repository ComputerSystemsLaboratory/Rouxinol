#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
      int n,ans = INT_MIN,minnum = INT_MAX,tmp;
      cin >> n;
      for(int i= 0;i<n;i++){
            cin >> tmp;
            if(i!=0) ans = max(ans,tmp - minnum);
            minnum = min(tmp,minnum);
      }
      cout << ans << endl;
}