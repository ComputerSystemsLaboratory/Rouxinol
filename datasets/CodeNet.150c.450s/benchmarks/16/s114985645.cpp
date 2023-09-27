#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int calcAllArea(string in) {
    stack<int> s;
    int allArea = 0;

    for (int i = 0; i < in.length(); i++) {
        char c = in[i];

        switch (c) {
            case '\\':
                s.push(i);
                break;
            case '/':
                if (!s.empty()) {
                    allArea += i - s.top();
                    s.pop();
                }
                break;
            default:
                break;
        }
    }

    return allArea;
}

vector<int> calcPartialAreas(string in) {
    stack<int> s1;
    stack<pair<int, int>> s2;

    for (int i = 0; i < in.length(); i++) {
        char c = in[i];
        int s1Pos, area;

        switch (c) {
            case '\\':
                s1.push(i);
                break;
            case '/':
                if (!s1.empty()) {
                    s1Pos = s1.top();
                    s1.pop();
                    area = i - s1Pos;

                    while (!s2.empty() && s2.top().first > s1Pos) {
                        area += s2.top().second;
                        s2.pop();
                    }

                    s2.push(make_pair(s1Pos, area));
                }
                break;
            default:
                break;
        }
    }

    vector<int> partialAreas;
    while (!s2.empty()) {
        partialAreas.push_back(s2.top().second);
        s2.pop();
    }
    reverse(partialAreas.begin(), partialAreas.end());

    return partialAreas;
}

int main() {
    string in;
    cin >> in;

    int allArea = calcAllArea(in);
    cout << allArea << endl;

    vector<int> partialAreas = calcPartialAreas(in);
    cout << partialAreas.size();
    for (const auto &v : partialAreas) cout << " " << v;
    cout << endl;
}