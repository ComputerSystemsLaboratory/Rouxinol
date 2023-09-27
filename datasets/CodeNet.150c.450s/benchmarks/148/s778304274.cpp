#include <bits/stdc++.h>
using namespace std;

template<typename T>
void out(T x) { cout << x << endl; exit(0); }
#define watch(x) cout << (#x) << " is " << (x) << endl





using ll = long long;

const ll mod = 1e9+7;
const int maxn = 1e6 + 5;




int n;
map<string, int> mp;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
    cin>>n;
    while (n--) {
	string s;
	cin>>s;
	mp[s]++;
    }

    vector<string> v;
    v.push_back("AC");
    v.push_back("WA");
    v.push_back("TLE");
    v.push_back("RE");

    for (auto s: v) {
	cout<<s<<" x "<<mp[s]<<endl;
    }
    
    
    return 0;
}
