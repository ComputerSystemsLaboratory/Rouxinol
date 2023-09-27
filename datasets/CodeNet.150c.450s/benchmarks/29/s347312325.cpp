#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    list<int> L;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "deleteFirst") {
            L.pop_front();
            continue;
        }
        if (s == "deleteLast") {
            L.pop_back();
            continue;
        }
        int num;
        cin >> num;
        if (s == "insert") {
            L.push_front(num);
            continue;
        }
        if (s == "delete") {
            for (list<int>::iterator it = L.begin(); it != L.end(); it++) {
                if (*it == num) {
                    L.erase(it);
                    break;
                }
            }
        }
    }

    for (list<int>::iterator it = L.begin(); it != L.end();) {
        cout << *it;
        if (++it != L.end()) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}