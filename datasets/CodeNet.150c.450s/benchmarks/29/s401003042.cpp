#include <iostream>
#include <cstdio>
#include <algorithm>
#include <list>
using namespace std;

int main() {
    list<int> ls; char c[21];
    int n; cin >> n;
    while (n--) {
        scanf("%s", c);
        if (c[0] == 'i') { int t; scanf("%d", &t); ls.push_front(t); }
        else if (c[6] == 'F') ls.pop_front();
        else if (c[6] == 'L') ls.pop_back();
        else {
            int t; scanf("%d", &t);
            auto ite = find(ls.begin(), ls.end(), t);
            if (ite != ls.end()) ls.erase(ite);
        }
    }
    int cnt = 0;
    for (auto ite : ls) {
        if (cnt) cout << ' ';
        cout << ite; cnt++;
    }
    cout << endl;
}