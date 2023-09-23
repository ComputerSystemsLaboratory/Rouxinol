#include <iostream>
#include <algorithm>

bool judge_triangle(int j_edge[])
{
    std::sort(j_edge, j_edge + 3);
    return j_edge[2] * j_edge[2] == j_edge[0] * j_edge[0] + j_edge[1] * j_edge[1];
}

int main()
{
    int num;
    std::cin >> num; 

    for(int i = 0; i < num; i++) {

        int edge[3];
        std::cin >> edge[0] >> edge[1] >> edge[2];

        if(judge_triangle(edge)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

    }
}

// "j_edge" to "j_edge+3" ha "array j_edge" no memory jyou no
// adress no hajimari to owari wo simesu. 
// Yoku miru to kou natteru ==> [hajimari, owari)