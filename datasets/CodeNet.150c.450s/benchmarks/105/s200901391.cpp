#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll a[205];
ll b[64];
void insertVector(ll mask) {
	for (int i = 63; i >= 0; i--) {
		if ((mask & (1ll << i)) == 0ll) continue;
		if (!b[i]) {
			b[i] = mask;
			return;
		}
		mask ^= b[i];
	}
}
bool checkVector(ll mask) {
	for (int i = 63; i >= 0; i--) {
		if ((mask & (1ll << i)) == 0ll) continue;
		if (b[i]) mask ^= b[i];
	}
	return (mask==0ll);
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; i++) scanf("%lld",&a[i]);
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < 64; i++) b[i] = 0;
        for (int i = n-1; i >= 0; i--){
            if (s[i] == '0'){
                insertVector(a[i]);
            }
            else{
                if (!checkVector(a[i])){
                    ans = 1; break;
                }
            }
        }
        printf("%d\n",ans);
    }
}
