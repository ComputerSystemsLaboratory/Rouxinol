#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    bool isLocked = true;
    vector<string> map;
    int N, M;
    cin >> N;
    
    map.clear();
    map.resize(N);
    for (int i = 0; i < N; ++i) {
        string id;
        cin >> id;
        map[i] = id;
    }
    
    cin >> M;
    for (int i = 0; i < M; ++i) {
        string id;
        cin >> id;
        auto itr = find(map.begin(), map.end(), id);
        if (itr != map.end()) {
            if (isLocked) {
                cout << "Opened by " << id << "\n";
            } else {
                cout << "Closed by " << id << "\n";
            }
            isLocked = !isLocked;
        } else {
            cout << "Unknown " << id << "\n";
        }
    }
    
    return 0;
}