#include <iostream>
using namespace std;

using llong = long long;

constexpr int MAX=100000;

int n, k;
llong T[MAX];

bool check(int x){
   llong cost=0; int count=0;
   for(int i=0; i<n; i++){
      cost+=T[i];
      while(cost>x){
         cost=T[i];
         count++;
         if(count==k) return false;
      }
   }
   return true;
}

int main(){
   cin.tie(0);
   ios::sync_with_stdio(false);
   cin >> n >> k;
   for(int i=0; i<n; i++) cin >> T[i];
   llong left=0; llong right=100000*10000;
   while(left<right){
      llong mid=(left+right)/2;
      if(check(mid)) right=mid;
      else left=mid+1;
   }
   cout << left << "\n";
   return 0;
}
