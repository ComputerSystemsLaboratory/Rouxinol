#include <iostream>
#include <cstdlib>
#include <vector>
#define MAX 150

std::vector<std::vector<int> > makeArray(); 
void search(std::vector<std::vector<int> > v, int h, int w);

int main(void) {
    std::vector<std::vector<int> > v = makeArray();
    int h;
    int w;
    std::cin >> h >> w;
    while (h != 0 || w != 0) {
        search(v, h, w);
        std::cin >> h >> w;
    }
    return EXIT_SUCCESS;;
}

std::vector<std::vector<int> > makeArray() {
    std::vector<std::vector<int> > v(MAX, std::vector<int>(MAX, 0)); 
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            v[i][j] = (i+1)*(i+1)+(j+1)*(j+1);
        }
    }
    return v;
}

void search(std::vector<std::vector<int> > v, int h, int w) {
    int value = h * h + w * w;
    int res_v = 1000000000;
    int res_h = h;
    int res_w = w;
    int max_j = MAX;

    for (int i = 0; i < MAX; i++) {
        for (int j = i + 1; j < max_j; j++) {
            if (v[i][j] > value) {
                if( v[i][j] < res_v) {
                    res_v = v[i][j];
                    res_h = i;
                    res_w = j;
                    max_j = j;
                }
                break; 
            } else if (v[i][j] == value && i > h) {
                res_v = v[i][j];
                res_h = i;
                res_w = j;
                max_j = j;
                std::cout << res_h + 1 << " " << res_w  + 1 << std::endl;
                return;;
            }
        }
    }
    std::cout << res_h + 1 << " " << res_w  + 1 << std::endl;
    return;
}