#include <bits/stdc++.h>
using namespace std;
int main(void){
   long n,k; cin >> n >> k;
   vector<long> v(n);
   for(int i=0;i<n;i++)cin >> v[i];
   for(int i=0;i<n-k;i++){
       if(v[i] < v[i+k])cout << "Yes" << endl;
       else cout << "No" << endl;
   }
}
