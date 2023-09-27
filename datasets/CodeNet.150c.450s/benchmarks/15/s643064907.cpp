#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>

using namespace std;


int main(){
	int n,q,a,ans=0;
	vector<int> T;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;T.push_back(a);
	}
	sort(T.begin(),T.end());
	cin >> q;
	for(int i=0;i<q;i++){
		cin >> a;
		ans+=binary_search(T.begin(), T.end(), a);
	}
	cout << ans << endl;
}