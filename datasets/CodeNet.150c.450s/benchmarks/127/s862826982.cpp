#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<string> train;
        string s;
        cin >> s;
        int k = s.size();

        for (int j = 1; j < k; j++){
            vector<string> left(2);
            vector<string> right(2);
            left[0] = s.substr(0, j);
            right[0] = s.substr(j);
            string r_left = left[0];
            string r_right = right[0];
            reverse(r_left.begin(), r_left.end());
            reverse(r_right.begin(), r_right.end());
            left[1] = r_left;
            right[1] = r_right;

            for (int j = 0; j < 2; j++){
                for (int z = 0; z < 2; z++){
                    train.push_back(left[j] + right[z]);
                    train.push_back(right[z] + left[j]);
                }
            }
        }
        set<string> ans(train.begin(), train.end());

        cout << (int)ans.size() << endl;
    }
}
