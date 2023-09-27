#include <iostream>
typedef long long ll;
using namespace std;

ll cnt[100010]={};

int main() {
	int N;
	cin >> N;
	ll ans=0;
	for(int i=0; i<N; ++i){
		ll A;
		cin >> A;
		ans += A;
		++cnt[A];
	}
	int Q;
	cin >> Q;
	for(int i=0; i<Q; ++i){
		ll B, C;
		cin >> B >> C;
		ans += cnt[B]*(C-B);
		cout << ans << endl;
		cnt[C] += cnt[B];
		cnt[B]=0;
	}
	return 0;
}