#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    REP(i,n) {
        string s;
        int j;
        cin >> s >> j;
        if (s == "S") {
            v.push_back(make_pair(0, j));
        }else if (s == "H") {
            v.push_back(make_pair(1, j));
        }else if (s == "C") {
            v.push_back(make_pair(2, j));
        }else {
            v.push_back(make_pair(3, j));
        }
    }
    
    sort(v.begin(), v.end());
    vector<pair<int, int> > w;
    REP(i,4) {
        For(j, 1, 14) {
            if(!binary_search(v.begin(), v.end(), make_pair(i, j))) {
                w.push_back(make_pair(i, j));
            }
        }
    }
    REP(i,w.size()) {
        switch (w[i].first) {
            case 0:
                cout << "S " << w[i].second << endl;
                break;
            case 1:
                cout << "H " << w[i].second << endl;
                break;
            case 2:
                cout << "C " << w[i].second << endl;
                break;
            case 3:
                cout << "D " << w[i].second << endl;
                break;
                
            default:
                break;
        }
    }
    return 0;
}