#include <iostream>
#include <array>
#include <vector>

using std::cout;
using std::endl;

int main()
{
    int data_num;
    scanf("%d", &data_num);

    while (data_num--) {
        std::array<int, 10> balls;
        for (auto i = 0; i < 10; i++) {
            std::cin >> balls.at(i);
        }

        std::vector<int> b(1, 0), c(1, 0);
        b.push_back(balls.at(0));

        for (auto i = 1; i < 10; i++) {
            int b_end = b.at(b.size() - 1);
            int c_end = c.at(c.size() - 1);
            int ball = balls.at(i);

            if (b_end > ball && c_end > ball) {
                cout << "NO" << endl;
                break;
            } else if (b_end < ball && c_end > ball) {
                b.push_back(ball);
            } else if (b_end > ball && c_end < ball) {
                c.push_back(ball);
            } else {
                if (b_end > c_end) {
                    b.push_back(ball);
                } else {
                    c.push_back(ball);
                }
            }

            if (i == 9) {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}