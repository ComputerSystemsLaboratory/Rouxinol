#include <iostream>
#include <vector>

int main(void) {
    int w;
    int n;
    int place;
    std::cin >> w >> n;
    std::vector<std::pair<int, int> > cource(n);

    std::vector<int> result(w, 0);

    int a;
    int b;
    char temp;

    for (int i = 0; i < n; i++) {
        std::cin >> cource[i].first >> temp >> cource[i].second;
    }


    for (int i = 1; i <= w; i++) {
        place = i;
        for (int j = 0; j < n; j++) {
            if (cource[j].first == place) {
                place = cource[j].second;
            } else if(cource[j].second == place) {
                place = cource[j].first;
            }
        }
        result[place - 1] = i;
    }

    for (int i = 0; i < w; i++) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}