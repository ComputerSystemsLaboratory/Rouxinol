#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

map<char, int> news = {{'N', 0}, {'E', 1}, {'S', 2}, {'W', 3}};
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    int N, M, I, x, y;
    char d;
    hset<int> st;
    while (cin >> N) {
        st.clear();
        if (N == 0) break;
        for (int i = 0; i < N; i++) {
            cin >> x >> y;
            st.insert(y*21 + x);
        }

        cin >> M;
        x = 10; y = 10;
        for (int i = 0; i < M; i++) {
            cin >> d >> I;
            for (int j = 0; j < I; j++) {
                x += dx[news[d]];
                y += dy[news[d]];
                st.erase(y*21 + x);
            }
        }
        if (st.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}