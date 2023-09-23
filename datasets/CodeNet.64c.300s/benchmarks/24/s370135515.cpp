#include <iostream>

int main(void)
{
    int n, data_a, data_b;
    int score_a, score_b;


    while(1)
    {
        std::cin >> n;
        if (n == 0) break;
        score_a = 0;
        score_b = 0;
        for(; n > 0 ; n--) {
            std::cin >> data_a;
            std::cin >> data_b;
            if (data_a > data_b) {
                score_a += (data_a + data_b);
            } else if(data_a < data_b) {
                score_b += (data_a + data_b);
            } else {
                score_a += data_a;
                score_b += data_b;
            }
        }
        std::cout << score_a << " " << score_b << std::endl;
    }

    return 0;
}