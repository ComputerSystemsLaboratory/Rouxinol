#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int solve(int n) {
    vector<int>keep(n);
    vector<int>ans(n-1);
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        keep[i]=a;
    }
    // for(int i:keep)cout<<i<<" ";
    sort(keep.begin(),keep.end());
    for(int i=0;i<n-1;i++){
        ans[i]=abs(keep[i]-keep[i+1]);
    }
    // for(int i:ans)cout<<i<<" ";
    sort(ans.begin(),ans.end());
    // int sa = ans[0];
    return ans[0];
}

int main(int argc, char const *argv[]) {
    int n;
    vector<int>ans;
    while (1) {
        cin >> n;
        if (n == 0) break;
        ans.push_back(solve(n));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}

