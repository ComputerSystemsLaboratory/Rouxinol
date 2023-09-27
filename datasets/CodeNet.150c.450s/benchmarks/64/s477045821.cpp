#include <iostream>
#include <vector>

using namespace std;

int n, q;
vector<int> A, m;
bool solve(int, int);

int main(){
	int i, j, k;
	int ain, min;
	bool exist;
	
	cin >> n;
	for(i=0;i<n;++i){
		cin >> ain;
		A.push_back(ain);
	}
	cin >> q;
	for(i=0;i<q;++i){
		cin >> min;
		m.push_back(min);
	}
	
	for(i=0;i<q;++i){
		exist = false;
		
		if(solve(0, m[i]))exist = true;
		if(exist)cout << "yes\n";
		else cout << "no\n";
	}
	
	return 0;
}

bool solve(int i, int m){
	int res;
	if(m == 0)return true;
	if(i>=n)return false;
	res = solve(i+1, m) || solve(i+1, m-A[i]);
	return res;
}
