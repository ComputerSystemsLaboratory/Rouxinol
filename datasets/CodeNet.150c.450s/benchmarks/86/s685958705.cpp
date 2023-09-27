#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int solve(int n, int m, int p){
    int x[n];
    int sum_x=0;
    int ans;
    for(int i=0;i<n;i++){
        cin >>x[i];
        sum_x+=x[i];
    }
    if(x[m-1]==0)ans=0;
    else ans = sum_x*(100-p)/x[m-1];
    return ans;
}

int main(int argc, char const *argv[]) {
    int n, m, p;
    vector<int>ans;
    while (1) {
        cin >> n >> m >> p;
        if(n == 0 && m == 0 && p == 0)break;
        ans.push_back(solve(n,m,p));
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}

