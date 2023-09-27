#include <iostream>
#include <string>
#include <vector>

using namespace std;

int LCS(string a, string b);
int S[1001][1001];

int main() {
    int n;
    cin >> n;
    string a, b;

    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        ans.push_back(LCS(a, b));
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << '\n';
    }
}

int LCS(string a, string b) {

    int len_a = a.size();
    int len_b = b.size();
    for (int i = 1; i <= len_a; i++) {
        for (int j = 1; j <= len_b; j++) {
            if (a[i-1] == b[j-1]) S[i][j] = S[i-1][j-1] + 1;
            else {
                S[i][j] = max(S[i][j-1], S[i-1][j]);
            }
        }
    }

    return S[len_a][len_b];
}

