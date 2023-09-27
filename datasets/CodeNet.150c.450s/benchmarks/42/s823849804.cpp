#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main () {

        long n;
        int q;
        cin >> n >> q;

        queue<string> name;
        queue<long> t;
        for (long i = 0; i < n; i++) {
                string stc;
                cin >> stc;
                name.push(stc);
                long lin;
                cin >> lin;
                t.push(lin);
        }

        long total = 0;
        while (!(t.empty())) {
                if (t.front() > q) {
                        total += q;
                        name.push(name.front());
                        name.pop();
                        t.push(t.front() - q);
                        t.pop();
                } else {
                        total += t.front();
                        cout << name.front() << " ";
                        name.pop();
                        cout << total << endl;
                        t.pop();
                }
        }

        return 0;

}