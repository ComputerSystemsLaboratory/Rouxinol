#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<string>
#include<cmath>
#include<set>
#include<queue>
#include<deque>
#include<bitset>
#include<iomanip>
#include<cctype>
#include<map>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep2(i,a,b) for (int (i)=a;(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()

using namespace std;
const int inf = 1001001000;
const long long int Inf = 1001001001001001000;

void print(vector<vector<int>> a){
	for (int i=0;i<a.size();i++){
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<vector<long long int>> a){
	for (int i=0;i<a.size();i++){
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<int> a){
    int n = a.size();
    for (int j=0;j<n;j++) {
        if (j != n-1) cout << a[j] << " ";
        else cout << a[j] << endl;
    }
}


int main(){
	vector<int> a;
	vector<pair<int,int>> b;
	string s;
	cin >> s;
	rep(i,s.size()){
		if(s[i] == '\\'){
			a.push_back(i);
		} else if (s[i] == '/') {
			if (a.size() == 0)
				continue;
			int l = a.back();
			a.pop_back();
			if (b.size() == 0)
				b.push_back(pair<int, int>(l, i - l));
			else {
				pair<int, int> temp(0, 0);
				while (b.size() > 0 && b.back().first > l){
					pair<int, int> t = b.back();
					b.pop_back();
					temp.first = t.first;
					temp.second += t.second;
				}
				temp.first = l;
				temp.second += i - l;
				b.push_back(temp);
			}
		}
	}
	int ans = 0;
	vector<int> ans_vec;
	rep(i, b.size()){
		ans += b[i].second;
		ans_vec.push_back(b[i].second);
	}
	cout << ans << endl;
	cout << b.size();
	rep(i, b.size()) cout << " " << ans_vec[i];
	cout << endl;

	return 0;
}


