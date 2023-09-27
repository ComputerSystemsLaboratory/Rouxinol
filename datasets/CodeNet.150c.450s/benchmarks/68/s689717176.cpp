#include <bits/stdc++.h>
using namespace std;
long long inf=1e9+7;

int main() {
	int n;
    while (cin >> n){
        if(n==0) break;

        vector<int> a(n);
        int m=inf;
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        for (int i = 0; i < n-1; i++){
            m=min(m, a[i+1]-a[i]);
        }
        cout << m << endl;
    }
    
}
//g++ -o a.exe aa.cpp
