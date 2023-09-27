/* 
 * alds1_3d.cpp ????????????
 */
#include <iostream>
#include <list>
#include <string>
#include <stack>
#include <utility>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void) {

    string map;
    cin >> map;

    int *waters = new int[map.size() + 2];
    memset(waters, 0, sizeof(int)*map.size() + 2);

    int total = 0, water_num = 0;
    stack<int> geo;
    for (int i = 1; i < map.size() + 1; ++i) {
        switch (map[i - 1]) {
            case '\\':
                geo.push(i);
                break;
            case '/':
                if (! geo.empty()) {
                    int max = i - geo.top();
                    total += max;
                    ++water_num;
                    bool succ = false;
                    for (int j = geo.top(), area = max; j < i; ++j) {
                        if (waters[j]) {
                            if (!succ) {
                                succ = true;
                                --water_num;
                            }
                            max = waters[j] = max > waters[j] + area
                                            ? max
                                            : waters[j] + area;
                        }
                        else {
                            area = waters[j] = max;
                            succ =false;
                        }
                    }
                    geo.pop();
                }
                break;
        }
    }

    printf("%d\n", total);
    printf("%d", water_num);
    for (int i = 1; i < map.size() + 2; ++i) {
        if ( (!waters[i]) && waters[i - 1]) {
            printf(" %d", waters[i - 1]);
        }
    }
    printf("\n");

    delete[] waters;
    return 0;
}