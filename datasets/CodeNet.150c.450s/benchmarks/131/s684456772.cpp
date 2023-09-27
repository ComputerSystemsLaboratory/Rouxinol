#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    string a0;
    int l;
    vector<int> data;
    int ai, ij;
    int j;

    while (cin >> a0 >> l,l) {

        data.clear();

        while (true) {

            while(a0.size() != l)
                a0 = "0" + a0;

            data.push_back(stoi(a0));

            sort(a0.begin(),a0.end());

            string min = a0;
            string max = a0;
            reverse(max.begin(), max.end());

            int d = stoi(max) - stoi(min);

            auto itr = find(data.begin(), data.end(), d);
            j = distance(data.begin(), itr);

            if(j != data.size()) {
                ai = d;
                ij = data.size() - j;
                break;
            }

            a0 = to_string(d);

        }

        cout << j << " " << ai << " " << ij << endl;
    }

    return 0;

}