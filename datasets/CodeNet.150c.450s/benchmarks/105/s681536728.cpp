#include <bits/stdc++.h>
#define mk make_pair
#define fs first
#define sc second
using namespace std;
typedef long long ll;
typedef long double ld;
ll a[100010];
const ll d=63;
ll basis[63]; // basis[i] keeps the mask of the vector whose f value is i

ll sz; // Current size of the basis

void insertVector(ll mask) {
	for (ll i = 0; i < d; i++) {
		if ((mask & 1ll << i) == 0) continue; // continue if i != f(mask)

		if (!basis[i]) { // If there is no basis vector with the i'th bit set, then insert this vector into the basis
			basis[i] = mask;
			++sz;
			
			return;
		}

		mask ^= basis[i]; // Otherwise subtract the basis vector from this vector
	}
}
bool insertVector1(ll mask) {
	for (ll i = 0; i < d; i++) {
		if ((mask & 1ll << i) == 0) continue; // continue if i != f(mask)
		if (!basis[i]) { // If there is no basis vector with the i'th bit set, then insert this vector into the basis			
			return 1;
		}
		mask ^= basis[i]; // Otherwise subtract the basis vector from this vector
	}
	return 0;
}
char s[222];
int main(){
    ll n, t;
    cin>>t;
    while(t--){
        ll ans=0;
        scanf("%lld",&n);
        for(ll i=0; i<n; ++i){
            scanf("%lld",a+i);
        }
        reverse(a, a+n);
        scanf("%s",s);
        reverse(s, s+n);
        bool l=1;
        for(ll i=0; i<63; ++i){
        	basis[i]=0;
        }
        sz=0;
        for(ll i=0; i<n; ++i){
        	if(s[i]=='1'){
        		if(insertVector1(a[i])){
        			l=0;
        			break;
        		}
        	}
        	else{
        		insertVector(a[i]);
        	}
        }
        if(l){
        	printf("0\n");
        }
        else{
        	printf("1\n");
        }
    }
  return 0;
}


