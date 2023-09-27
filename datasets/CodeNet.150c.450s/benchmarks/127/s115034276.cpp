#include <bits/stdc++.h>

using namespace std;

int main() {

    int m;

    cin >> m;

    while(m--) {

        int len;
        string train, temp1, temp2;
        map<string, bool> pat;

        cin >> train;

        len = train.size();

        for(int i = 1; i < len; ++i) {
            temp1 = train.substr(0, i);
            temp2 = train.substr(i);

            pat[temp1 + temp2] = true;
            pat[temp2 + temp1] = true;

            reverse(temp1.begin(), temp1.end());
            pat[temp1 + temp2] = true;
            pat[temp2 + temp1] = true;

            reverse(temp1.begin(), temp1.end());
            reverse(temp2.begin(), temp2.end());
            pat[temp1 + temp2] = true;
            pat[temp2 + temp1] = true;

            reverse(temp1.begin(), temp1.end());
            pat[temp1 + temp2] = true;
            pat[temp2 + temp1] = true;
        }

        cout << pat.size() << endl;

    }

}