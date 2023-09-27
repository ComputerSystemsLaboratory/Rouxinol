#include <algorithm>
#include <cmath>
#include <climits>
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <numeric>
#include <vector>
#include <map>

using namespace std;
using ll = long long;
template<typename T> void print(T t) {cout << t << endl;}

vector<pair<ll, int>> prime_factorize(ll n) {
    vector < pair < ll, int >> res;
    int num = 0;
    while (n % 2 == 0) {
        num++;
        n /= 2;
    }
    if (num != 0) res.emplace_back(make_pair( 2, num ));

    for (ll p = 3; p * p <= n; p += 2) {
        num = 0;
        while (n % p == 0) {
            num++;
            n /= p;
        }
        if (num != 0) res.emplace_back(make_pair(p, num));
    }
    if (n != 1)res.emplace_back(make_pair(n, 1));
    return res;
}


struct Room {
    int id, mark, step;
    vector<int> vicinities;
};

int main() {
    int N, M, a, b;
    cin >> N >> M;
    vector<Room> rooms(N+1);
    for (int i = 1; i <= N; i++) {
        rooms[i].id = i;
        rooms[i].step = i==1 ? 0:INT_MAX;
    }
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        rooms[a].vicinities.push_back(b);
        rooms[b].vicinities.push_back(a);
    }


    queue<int> que;
    que.push(1);
    while (!que.empty()) {
        int id = que.front();
        que.pop();

        int step = rooms[id].step+1;
        for (int i : rooms[id].vicinities) {
            if (step < rooms[i].step) {
                rooms[i].step = step;
                rooms[i].mark = id;
                que.push(i);
            }
        }
    }

    print("Yes");
    for (int i = 2; i <= N; i++) {
        print(rooms[i].mark);
    }

}

