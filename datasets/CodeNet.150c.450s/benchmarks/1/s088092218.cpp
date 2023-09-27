#include <iostream>
#include <vector>
#include <algorithm>

#define FOR(i,n) for(int i=0; i<n; i++)
#define FORI(i,z,n) for(int i=z; i<n; i++)

using namespace std;

int findSlot(vector<int>  &tail, int d) {
    int l=-1;
    int h=tail.size()-1;

    while (h - l != 1){
        int m = (h+l)/2;
        if (tail[m] >= d)
            h = m;
        else
            l = m;
    }
    return h;
}


int main () {
    int n;
    cin >> n;

    vector<int> digits(n);
    vector<int> tail;

    FOR(i, n) {
        int d;
        cin >> d;
        if (tail.empty()) {
            tail.push_back(d);
        } else if (d > tail.back()) {
            tail.push_back(d);
        } else {
            int toChange = findSlot(tail, d);
            tail[toChange] = d;
        }
    }

    cout << tail.size() << endl;
}

