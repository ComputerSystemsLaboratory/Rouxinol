#include <iostream>
#include <string>

using std::string;

int main()
{
    int cards_num;
    std::cin >> cards_num;

    int pnt_t = 0, pnt_h = 0;
    string card_t, card_h;
    while (cards_num--) {
        std::cin >> card_t >> card_h;

        if (card_t > card_h) {
            pnt_t += 3;
        } else if (card_t < card_h) {
            pnt_h += 3;
        } else {
            pnt_t++;
            pnt_h++;
        }
    }

    std::cout << pnt_t << " " << pnt_h << std::endl;

    return 0;
}