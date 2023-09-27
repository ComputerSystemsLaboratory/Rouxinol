#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int m;
    string line, fr, sc;
    cin >> m;
    while (m--) {
        cin >> line;
        set<string> s;
        s.insert(line);
        for (int i = 1; i < line.size(); ++i) {
            fr = line.substr(0, i);
            sc = line.substr(i, line.size());
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 4; ++k) {
                    s.insert(fr + sc);
                    if (k % 2)
                        reverse(fr.begin(), fr.end());
                    else
                        reverse(sc.begin(), sc.end());
                    s.insert(fr + sc);
                }
                fr.swap(sc);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}