#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=k; i<n; i++) {
		cout<<(a[i]>a[i-k]?"Yes":"No")<<endl;
	}
	return 0;
}
