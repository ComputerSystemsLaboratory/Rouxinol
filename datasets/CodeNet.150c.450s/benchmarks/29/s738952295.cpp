#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define INF 120000000

using namespace std;

typedef pair<int, int> P;
typedef long long int LL;

int main() {
    list<int> l;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char tmp[100];
        int a;
        scanf("%s", &tmp);
        string s = tmp;
        if (s != "deleteLast" && s != "deleteFirst") {
            scanf("%d", &a);
        }

        if (s == "insert") {
            l.push_front(a);
        } else if (s == "delete") {
            for (auto it = l.begin(); it != l.end(); it++) {
                if (*it == a) {
                    l.erase(it);
                    break;
                }
            }
        } else if (s == "deleteFirst") {
            l.pop_front();
        } else if (s == "deleteLast") {
            l.pop_back();
        }
    }

    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it;
        if (next(it, 1) != l.end()) cout << " ";
    }
    cout << endl;

    return 0;
}