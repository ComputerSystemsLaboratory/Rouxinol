#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int vals[6];
int a0, l;

int update(int ai) {
    for (int i = 0; i < l; ++i) {
        vals[i] = ai % 10;
        ai /= 10;
    }
    sort(vals, vals + l);
    int max = 0;
    int min = 0;
    int d = 1;
    for (int i = 0; i < l; ++i) {
        max += d * vals[i];
        min += d * vals[l - i - 1];
        d *= 10;
    }

    return max - min;
}

int main() {
    while (1) {
        cin >> a0 >> l;
        if (a0 == 0 && l == 0) break;

        vector<int> v;
        v.push_back(a0);

        int ai = a0;
        bool found = false;
        while(1) {
            ai = update(ai);
            //cout << ai << endl;
            for (int j = 0; j < v.size(); ++j) {
                if (ai == v[j]) {
                    cout << j << " " << ai << " "<< v.size() - j << endl;
                    found = true;
                    break;
                }
            }
            v.push_back(ai);
            if (found) break;
        }
    }
}