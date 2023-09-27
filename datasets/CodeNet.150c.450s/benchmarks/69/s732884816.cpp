#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int ball[10]; 
vector<int> l;
vector<int> r;

bool solve() {
    bool res = false;
    for (int i = 0; i < 1024; i++) {
        for (int j = 0; j < 10; j++) {
            if (i & (1 << j)) {
                l.push_back(ball[j]);
            }
            else {
                r.push_back(ball[j]);
            }
        }
        int lLen = l.size();
        int rLen = r.size();
        bool lOK = true;
        bool rOK = true;        
        for (int j = 0; j < lLen - 1; j++) {
            if (l.at(j) > l.at(j + 1)) {
                lOK = false;
                break;
            }
        }
        for (int j = 0; j < rLen - 1; j++) {
            if (r.at(j) > r.at(j + 1)) {
                rOK = false;
                break;
            }
        }
        if (lOK && rOK) {
            res = true;
            break;
        }
        l.clear();
        r.clear();        
    }
    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> ball[j];
        }        
        if (solve()) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}