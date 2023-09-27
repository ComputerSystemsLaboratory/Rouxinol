#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdio>

int main()
{
    char c;
    int current = 0;
    std::vector<int> height;
    height.push_back(current);
    while (scanf("%c", &c) != EOF) {
        switch (c) {
        case '\\' :
        {
            current--;
            height.push_back(current);
            break;
        }
        case '/':
        {
            current++;
            height.push_back(current);
            break;
        }
        case '_':
        {
            height.push_back(current);
            break;
        }
        default :
        {
            break;
        }
        }
    }

    int area = 0;
    int sum = 0;
    std::vector<int> areas;
    std::vector<int>::iterator itLeft = height.begin();
    std::vector<int>::iterator itRight = height.begin();
    while (true) {
        ++itRight;
        if (itRight == height.end()) {
            if (std::next(itLeft) == itRight) {
                break;
            } else {
                area = 0;
                itLeft++;
                itRight = itLeft;
            }
        } else {
            if (*itLeft == *itRight) {
                if (area != 0) {
                    areas.push_back(area);
                    sum += area;
                }
                area = 0;
                itLeft = itRight;
            } else if (*(itLeft) < *(itRight)) {
                itLeft = itRight;
            } else {
                area += *itLeft - *itRight;
            }
        }
    }

    std::cout << sum << std::endl << areas.size();
    for (std::size_t i = 0; i < areas.size(); ++i) {
        std::cout << " " << areas[i];
    }
    std::cout << std::endl;

    return 0;
}
