#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,int> sys;

int N, M;
string s;
bool locked = true;

int main() {
    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> s;
        sys[s] = 1;
    }
    cin >> M;
    for (int i=0; i<M; ++i) {
        cin >> s;
        if (sys[s]) {
            if (locked) {
                locked = false;
                cout << "Opened by " << s << endl;
            } else {
                locked = true;
                cout << "Closed by " << s << endl;
            }
        } else {
            cout << "Unknown " << s << endl;
        }
    }
    return 0;
}