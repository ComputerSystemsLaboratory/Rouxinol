#include <iostream>
#include <vector>
#include <cmath>
#include <queue>


std::vector<int> V[100000];
int C[100000];
int color;
int maxi;

int main () {
    int n, m, q;
    std::cin >> n >> m;

    for (int i; i < m; i++) {
        int s, t;
        std::cin >> s >> t;
        V[s].push_back(t);
        V[t].push_back(s);
    }

    for (int i = 0; i < n; i++) {
        if(C[i] == 0) {
            color++;
            std::queue<int> Q;
            Q.push(i);
            while (Q.size()) {
                C[Q.front()] = color;
                for (auto t: V[Q.front()]) {
                    if (C[t] == 0) {
                        C[t] = color;
                        Q.push(t);
                    }
                }
                Q.pop();
            }
        }
    }

    std::cin >> q;
    for (int i = 0; i < q; i++) {
        int s, t;
        std::cin >> s >> t;
        if ((C[s] == C[t]) && (C[s] != 0)) {
            std::cout << "yes" << std::endl;
        }
        else{
            std::cout << "no" << std::endl;
        }
    }

}
