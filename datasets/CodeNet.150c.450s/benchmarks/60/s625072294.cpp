//
// Created by tattsun on 2017/02/11.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int u, k, p;
    for(int i=0; i<n; i++) {
        cin >> u >> k;

        vector<int> dest;
        for(int j=0; j<k; j++) {
            cin >> p;
            dest.push_back(p);
        }

        vector<int>::iterator it = dest.begin();
        for(int j=0; j<n; j++) {
            if(j != 0) cout << " ";
            if(it != dest.end() && j == *it-1) {
                cout << "1";
                it++;
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
}