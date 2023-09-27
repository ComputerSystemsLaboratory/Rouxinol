#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
vector<vector<char> > phone = {
    {},
    {' ', '.', ',', '!', '?'},
    {'c', 'a', 'b'},
    {'f', 'd', 'e'},
    {'i', 'g', 'h'},
    {'l', 'j', 'k'},
    {'o', 'm', 'n'},
    {'s', 'p', 'q', 'r'},
    {'v', 't', 'u'},
    {'z', 'w', 'x', 'y'}
};

int main() {
    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int k = 0, kl = 0;
        for (char c : s) {
            if (c - '0' == 0) {
                if (kl == 0) continue;
                cout << phone[kl][k];
                k = 0;
                kl = 0;
            } else {
                kl = c - '0';
                k = (k+1) % phone[kl].size();
            }
        }
        cout << endl;
    }
    return 0;
}