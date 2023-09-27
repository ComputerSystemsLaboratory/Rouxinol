/* DSL1_A: Disjoint Set */

#include <iostream>

class UnionFindTree {
    int *parents;

    public:
        UnionFindTree(int n) {
            parents = new int[n];
            for (int i = 0; i < n; i++)
                parents[i] = i;
        }

        ~UnionFindTree() {
            delete [] parents;
        }

        void unite(int x, int y) {
            parents[ find(x) ] = find(y);
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