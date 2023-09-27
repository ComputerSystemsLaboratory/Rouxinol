#include <iostream>

using namespace std;

int main()
{
    bool cards[4][13] = {{}, {}, {}, {}};
    
    // 0: S
    // 1: H
    // 2: C
    // 3: D
    
    int n;
    char suit;
    int rank;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> suit >> rank;

        switch (suit)
        {
            case 'S':
                cards[0][rank - 1] = true;
                break;
            case 'H':
                cards[1][rank - 1] = true;
                break;
            case 'C':
                cards[2][rank - 1] = true;
                break;
            case 'D':
                cards[3][rank - 1] = true;
                break;
            default:
                break;
        }
    }


    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 13; y++)
        {
            switch (x)
            {
                case 0:
                    suit = 'S';
                    break;
                case 1:
                    suit = 'H';
                    break;
                case 2:
                    suit = 'C';
                    break;
                case 3:
                    suit = 'D';
                    break;
                default :
                    break;
            }

            if (!cards[x][y])
            {
                cout << suit << " " << y + 1 << endl;
            }
        }
    }

    return 0;
}

