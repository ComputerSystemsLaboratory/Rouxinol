#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main(void)
{
    int n, q;

    std::cin >> n;
    std::cin >> q;

    std::vector< std::set<int> > sets;

    for (int i = 0; i < n; i++) {
        std::set<int> set;
        set.insert(i);
        sets.push_back(set);
    }

    for (int i = 0; i < q; i++) {
        int com, x, y;
        std::cin >> com;
        std::cin >> x;
        std::cin >> y;

        int xIndex = -1, yIndex = -1;
        for (int j = 0; j < sets.size(); j++) {
            if (xIndex < 0) {
                std::set<int>::iterator it = sets[j].find(x);
                if (it != sets[j].end()) {
                    xIndex = j;
                }
            }
            if (yIndex < 0) {
                std::set<int>::iterator it = sets[j].find(y);
                if (it != sets[j].end()) {
                    yIndex = j;
                }
            }
            if (xIndex >= 0 && yIndex >= 0) {
                break;
            }
        }

        // unite
        if (com == 0) {
            if (xIndex != yIndex) {
                if (xIndex > yIndex) {
                    std::swap(xIndex, yIndex);
                }
                sets[xIndex].insert(sets[yIndex].begin(), sets[yIndex].end());
                sets.erase(sets.begin() + yIndex);
            }
        }
        // same
        else {
            if (xIndex == yIndex) {
                std::cout << "1" << std::endl;
            } else {
                std::cout << "0" << std::endl;
            }
        }
    }

    return 0;
}