#include <iostream>

using namespace std;

int main()
{
    int num;

    while(true)
    {
        cin >> num;
        if(num == 0) break;

        int score1 = 0;
        int score2 = 0;
        int card1;
        int card2;
        for(int i = 0; i < num; ++i)
        {
            cin >> card1 >> card2;
            if(card1 > card2)
            {
                score1 += card1 + card2;
            }
            else if(card1 < card2)
            {
                score2 += card1 + card2;
            }
            else
            {
                score1 += card1;
                score2 += card2;
            }
        }
        cout << score1 << ' ' << score2 << endl;
    }
}