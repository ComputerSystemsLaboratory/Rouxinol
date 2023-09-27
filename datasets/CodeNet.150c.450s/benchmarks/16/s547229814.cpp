#include "bits/stdc++.h"

using namespace std;

#define int long long
#define ll long long
typedef pair<int, int> P;
#define mod 1000000007
#define INF (1LL<<60)

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl



signed main(){

	string S;
	cin >> S;
	int N = S.length();

	stack<int> st;
	stack<P> ans;

	rep(i, N){
		if (S[i] == '\\') st.push(i);
		else if(st.size()>0 && S[i]=='/'){
			int k = st.top();
			st.pop();
			int tmp = i-k;
			while (ans.size() > 0 && ans.top().first > k){
				tmp += ans.top().second;
				ans.pop();
			}
			ans.push(P(k, tmp));
		}
	}

	vector<int> a;
	int sum = 0;
	while (ans.size() > 0){
		sum += ans.top().second;
		a.push_back(ans.top().second); ans.pop();
	}
	cout << sum << endl;
	if (a.size() == 0){
		cout << a.size();
	}else
		cout << a.size() << " ";
	for (auto i = a.rbegin(); i != a.rend(); i++){
		cout << *i ;
		if (i != a.rend() - 1)
			cout << " ";
	}
	cout << endl;



	return 0;
}

