#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    bool open = false;
    cin >> n;
    string line;
    vector<string> ids;
    for (int i = 0; i < n; ++i) {
        cin >> line;
        ids.push_back(line);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> line;
        vector<string>::iterator itr = find(ids.begin(), ids.end(), line);
        if (itr == ids.end()) {
            cout << "Unknown " << line << endl;
        } else if (open) {
            cout << "Closed by " << line << endl;
            open = false;
        } else {
            cout << "Opened by " << line << endl;
            open = true;
        }
    }
    return 0;
}