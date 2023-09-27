#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int m;
    cin >> m;
    while (m--) {
        string train;
        cin >> train;
        set<string> trains;
        for (int i = 1; i < (int) train.length(); i++) {
            string sub[2];
            sub[0] = train.substr(0, i);
            sub[1] = train.substr(i);
            string rsub[2];
            for (int j = 0; j < 2; j++) {
                for (string::reverse_iterator rit = sub[j].rbegin(); rit != sub[j].rend(); rit++) {
                    rsub[j] += *rit;
                }
            }
            trains.insert(sub[0] + sub[1]);
            trains.insert(sub[0] + rsub[1]);
            trains.insert(rsub[0] + sub[1]);
            trains.insert(rsub[0] + rsub[1]);
            trains.insert(sub[1] + sub[0]);
            trains.insert(sub[1] + rsub[0]);
            trains.insert(rsub[1] + sub[0]);
            trains.insert(rsub[1] + rsub[0]);
        }
        cout << trains.size() << endl;
    }
}