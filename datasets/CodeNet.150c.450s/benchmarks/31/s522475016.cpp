#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int N;
int main(){
cin >> N;
ll mini;
cin >> mini;
ll res = -1000000000000LL;
for(int i=1;i<N;i++){
int a; cin >> a; 
res = max( res, a-mini );
mini = min( mini, (ll)a );
}
cout << res << endl;
}