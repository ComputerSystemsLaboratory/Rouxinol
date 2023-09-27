#include <iostream>
#include <algorithm>

int main()
{
    int num;
    std::cin >> num; 
    int edge[3];

    for(int i = 0; i < num; i++) {

        std::cin >> edge[0] >> edge[1] >> edge[2];

        // "edge" to "edge+3" ha "array edge" no memory jyou no
        // adress no hajimari to owari wo simesu. 
        // Yoku miru to kou natteru ==> [hajimari, owari)
        std::sort(edge, edge + 3);

        if(edge[2] * edge[2] == edge[0] * edge[0] + edge[1] * edge[1]) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

    }
}