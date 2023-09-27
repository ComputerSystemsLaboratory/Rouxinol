/* DSL1_A: Disjoint Set */

#include <iostream>

class UnionFindTree {
    int *parents;
    int *ranks;

    public:
        UnionFindTree(int n) {
            parents = new int[n];
            ranks   = new int[n];
            for (int i = 0; i < n; i++) {
                parents[i] = i;
                ranks[i]   = 0;
            }
        }

        void unite(int x, int y) {
            x = find(x);
            y = find(y);
            if ( ranks[x] < ranks[y] ) {
                parents[x] = y;
            }
            else if ( ranks[y] < ranks[x] ) {
                parents[y] = x;
            }
            else if (x != y) {
                parents[x] = y;
                ranks[y] += 1;
            }
        }

        int find(int x) {
            if (parents[x] == x)
                return x;
            else
                return parents[x] = find( parents[x] );
        }

        bool is_grouped(int x, int y) {
            return find(x) == find(y);
        }
};

int main() {
    std::ios::sync_with_stdio(false);

    int n, q;
    std::cin >> n >> q;

    UnionFindTree uft(n);

    int command, x, y;
    for (int i = 0; i < q; i++) {
        std::cin >> command >> x >> y;
        switch (command) {
            case 0:
                uft.unite(x, y);
                break;
            case 1:
                bool same = uft.is_grouped(x, y);
                std::cout << ( same ? 1 : 0 ) << "\n";
                break;
        }
    }

    return 0;
}