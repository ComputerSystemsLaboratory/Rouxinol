#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
int LIS(const vector<T>& v){
    if(v.empty()) return 0;
	vector<T> a(v.size(), v[0]);
    auto end = a.begin();
    ++end;
	for(int i=1;i<v.size();i++){
		auto l = lower_bound(a.begin(), end, v[i]);
        if(l == end) ++end;
        *l = v[i];
	}
	return distance(a.begin(), end);
}

int main(){
    int n;
    while(cin >> n){
        vector<int> a(n);
        for(auto& t : a) cin >> t;
        cout << LIS(a) << endl;
    }
}
