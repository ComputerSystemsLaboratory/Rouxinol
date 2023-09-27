#include <iostream>
#include <list>
#include <string>
#include <stack>
#include <utility>
#include <cstdio>

using namespace std;

struct Water {
    int b;
    int area;
};

class PredFunctor {
  public:
    int b;
    int* area_ptr;
  public:
    PredFunctor(int b, int *area_ptr) : b(b), area_ptr(area_ptr) { }
    bool operator()(const Water& water) {
        if (water.b > this->b) {
            *area_ptr += water.area;
            return true;
        }
        return false;
    }
};

int main(void) {

    string map;
    cin >> map;

    int total_area = 0;
    list<Water> waters;
    stack<int> geo;
    for (int i = 0; i < map.size(); ++i) {
        switch (map[i]) {
            case '\\':
                geo.push(i);
                break;
            case '/':
                if ( ! geo.empty()) {
                    int b = geo.top(), this_area = i - b;
                    total_area += this_area;
                    PredFunctor pred(b, &this_area);
                    waters.remove_if(pred);
                    waters.push_back({ b, this_area });
                    geo.pop();
                }
                break;
        }
    }

    printf("%d\n", total_area);
    printf("%lld", waters.size());
    for (list<Water>::iterator it = waters.begin();
            it != waters.end(); ++it) {
        printf(" %d", it->area);
    }
    printf("\n");

    return 0;
}