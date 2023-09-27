#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi lis( vi arr ){
	vi seq, back(arr.size()), ans;
	for( int i = 0; i < arr.size(); i++ ){
		int res = 0, lo = 1, hi = seq.size();
		while( lo <= hi ){
			int mid = (lo+hi)/2;
			if( arr[seq[mid-1]] < arr[i] ) res = mid, lo = mid+1;
			else hi = mid-1;
		}
		if( res < seq.size() ) seq[res] = i;
		else seq.push_back( i );
		back[i] = res == 0 ? -1 : seq[res-1];
	}
	int at = seq.back();
	while( at != -1 ) ans.push_back( at ), at = back[at];
	reverse(ans.begin(), ans.end());
	return ans;
}

int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	
	int N;
	
	cin >> N;
	vi num(N);
	for( int i = 0; i < N; i++ ){
		cin >> num[i];
	}
	
	cout << lis(num).size() << '\n';
	
	
	return 0;
}
