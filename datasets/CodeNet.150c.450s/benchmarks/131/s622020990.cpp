#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <locale>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;
vector<int> kisyutu;

auto makenum(int A, int L) {
    vector<int> num;
    int keep;
    for (int i = L - 1; i >= 0; i--) {
        keep = pow(10, i);
        num.push_back(A / keep);
        A = A - (A / keep) * keep;
        // cout << A << endl;
    }
    sort(num.begin(), num.end());

    // for (int i : num) cout << i << " ";
    // cout << endl;

    return num;
}

auto solve(int A, int L) {  //, vector<int> &num
    vector<int> ans;
    vector<int> num;
    num = makenum(A, L);

    int maxnum = 0;
    int minnum = 0;
    for (int i = 0; i < L; i++) {
        maxnum += num[i] * pow(10, i);
        minnum += num[i] * pow(10, L - i - 1);
    }
    int sa = maxnum - minnum;
    for (int i = 0; i < kisyutu.size(); i++) {
        if (kisyutu[i] == sa) {
            ans.push_back(i);
            ans.push_back(sa);
            ans.push_back(kisyutu.size() - i);
            return ans;
        }
    }
    kisyutu.push_back(sa);
    ans = solve(sa, L);
    return ans;
}

int main() {
    int A, L;
    vector<vector<int>> ans;
    // cout << kisyutu.size();
    while (1) {
        cin >> A >> L;
        if (!A && !L) break;
        // vector<int> num;
        kisyutu.push_back(A);
        ans.push_back(solve(A, L));  //, num
        kisyutu.clear();
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
}

/*
int型で入力をとる
aiとのさの分だけ０を足す
ソートして最大ー最小
再帰する
ai =＝ ai+1でretrun
*/
