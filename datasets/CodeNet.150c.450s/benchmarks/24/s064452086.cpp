#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::vector;

typedef pair<int, int> PII;

int main(void) {
    int n; // number of kukan
    int m; // money
    int answer;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }
        answer = 0;
        vector<PII> road(n);
        for (int i = 0; i < n; i ++) {
            cin >> road[i].second >> road[i].first; 
        }
        sort(road.begin(), road.end(), std::greater<PII>());

        for (int i = 0; i < n; i ++) {
            if (m <= 0) {
                answer += road[i].first * road[i].second;
                continue; 
            } else if (m > 0) {
                m -= road[i].second;
                if (m <= 0) {
                    answer += -m * road[i].first;      
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}