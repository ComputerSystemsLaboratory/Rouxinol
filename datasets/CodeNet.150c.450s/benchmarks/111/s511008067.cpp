#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> in(n);
    for(int i = 0; i < n; i++) cin >> in[i];
    vector<long long> ans(21,0);
    ans[in[0]] = 1;
    for(int i = 1; i < n-1; i++){
        vector<long long> tmp(21,0);
        for(int j = 0; j < 21; j++){
            if(j + in[i] <= 20)tmp[j+in[i]] += ans[j];
            if(j - in[i] >= 0) tmp[j-in[i]] += ans[j];
        }
        ans = tmp;
    }
    cout << ans[in[n-1]] << endl;
}

