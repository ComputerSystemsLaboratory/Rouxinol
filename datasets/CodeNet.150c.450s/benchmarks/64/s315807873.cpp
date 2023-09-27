#include<iostream>
#include<vector>

using namespace std;

vector< int > A;
vector< int > m;
bool dfs(int m,int n){
		if (n > A.size()) return false;
		if (m < 0) return false;
		if (m == 0) return true;
		bool ans;
		ans = dfs(m-A[n],n+1) || dfs(m,n+1);
		return ans; 
}


int main(){
		int n; cin >> n;
		for (int i = 0; i < n; i++){
				int a; cin >> a;
				A.push_back(a);
		}
		int q; cin >> q;
		for (int i = 0; i < q; i++){
				int _m; cin >> _m;
				m.push_back(_m);
		}
		for (size_t i = 0; i < m.size(); i++){
				if (dfs(m[i],0)){
						cout << "yes" << endl;
				}else{
						cout << "no" << endl;
				}
		}
		return 0;
}