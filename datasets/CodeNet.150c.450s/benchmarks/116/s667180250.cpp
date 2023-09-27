#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    while(n!=0|| k!=0){
    vector<int>a(n);
    for(int i = 0;i < n;i++){
      cin >> a.at(i);
    }
   vector<int>S(n+1);
   S.at(0) = 0;
   for(int i = 0;i < n;i++){
     S.at(i+1) = S.at(i) + a.at(i);
   }
   int ans = 0;
   for(int i = 0;i+k < n+1;i++){
     if(S.at(i+k)-S.at(i) > ans)
     ans = S.at(i+k) - S.at(i);
   }
   cout << ans << endl;
   cin >> n >> k;
    }
 }
