#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    enum {SPADE, HEART, CLUB, DIAMOND};

    /* isCardExist[suit][rank]
     * suit 0: Spade, 1: Heart, 2: Club, 3: Diamond
     * rank = 1, 2, ..., 13 */
    constexpr int SUIT_NUM = 4;
    constexpr int RANK_NUM = 13;
    bool isCardExist[SUIT_NUM][RANK_NUM + 1] = {{false}};
    // unuse isCardExist[*][0]
    char suit;
    int rank;

    int cards_num;
    cin >> cards_num;
    while (cards_num--) {
        cin >> suit >> rank;
        switch (suit) {
            case 'S':
                isCardExist[SPADE][rank] = true;
                break;
            case 'H':
                isCardExist[HEART][rank] = true;
                break;
            case 'C':
                isCardExist[CLUB][rank] = true;
                break;
            case 'D':
                isCardExist[DIAMOND][rank] = true;
                break;
            default:
                printf("ERROR!\n");
                break;
        }
    }

    for (int i = 1; i <= 13; i++) {
        if (isCardExist[SPADE][i] == false) {
            cout << "S " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++) {
        if (isCardExist[HEART][i] == false) {
            cout << "H " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++) {
        if (isCardExist[CLUB][i] == false) {
            cout << "C " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++) {
        if (isCardExist[DIAMOND][i] == false) {
            cout << "D " << i << endl;
        }
    }

    return 0;
}